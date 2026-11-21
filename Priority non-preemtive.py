def priority_non_preemptive():
    n = int(input("Enter number of processes: "))
    processes = []
    
    for i in range(n):
        print(f"\nProcess {i+1}:")
        at = int(input("  Arrival Time: "))
        bt = int(input("  Burst Time: "))
        priority = int(input("  Priority (Lower = Higher Priority): "))
        processes.append({
            'id': i+1, 'at': at, 'bt': bt, 
            'pri': priority, 'completed': False
        })

    current_time = 0
    completed_count = 0
    stats = []

    while completed_count < n:
        # 1. Filter processes that have arrived and are not yet done
        available = [p for p in processes if p['at'] <= current_time and not p['completed']]
        
        if not available:
            # CPU is idle, wait for the next arrival
            current_time += 1
            continue

        # 2. Pick the process with the HIGHEST priority (smallest number)
        # If priorities are equal, we usually fallback to Arrival Time (FCFS)
        best_p = min(available, key=lambda x: (x['pri'], x['at']))
        
        # 3. Calculate times
        finish_time = current_time + best_p['bt']
        tat = finish_time - best_p['at']
        wt = tat - best_p['bt']
        
        # 4. Mark as finished and update global clock
        best_p['completed'] = True
        current_time = finish_time
        completed_count += 1
        
        stats.append({
            'id': best_p['id'], 'at': best_p['at'], 'bt': best_p['bt'],
            'pri': best_p['pri'], 'ft': finish_time, 'tat': tat, 'wt': wt
        })

    # Display Results
    print("\nP_ID\tPRI\tAT\tBT\tFT\tTAT\tWT")
    # Sort results by ID just for a clean table output
    for s in sorted(stats, key=lambda x: x['id']):
        print(f"{s['id']}\t{s['pri']}\t{s['at']}\t{s['bt']}\t{s['ft']}\t{s['tat']}\t{s['wt']}")

if __name__ == "__main__":
    priority_non_preemptive()
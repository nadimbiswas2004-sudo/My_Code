def sjf_non_preemptive():
    # 1. User Input (Simplified)
    n = int(input("Enter number of processes: "))
    processes = []
    
    for i in range(n):
        print(f"\nProcess {i+1}:")
        at = int(input("  Arrival Time: "))
        bt = int(input("  Burst Time: "))
        processes.append({'id': i+1, 'at': at, 'bt': bt, 'completed': False})

    current_time = 0
    completed_count = 0
    stats = []

    while completed_count < n:
        # 2. Find available processes (arrived but not finished)
        available = [p for p in processes if p['at'] <= current_time and not p['completed']]
        
        if not available:
            # If no one is here yet, jump to the arrival of the next process
            current_time += 1
            continue

        # 3. Pick the "Shortest Job" (min burst time)
        shortest_job = min(available, key=lambda x: x['bt'])
        
        # 4. Process it
        start_time = current_time
        finish_time = start_time + shortest_job['bt']
        turnaround_time = finish_time - shortest_job['at']
        waiting_time = turnaround_time - shortest_job['bt']
        
        # Mark as done
        shortest_job['completed'] = True
        completed_count += 1
        current_time = finish_time
        
        stats.append({
            'id': shortest_job['id'],
            'at': shortest_job['at'],
            'bt': shortest_job['bt'],
            'ft': finish_time,
            'tat': turnaround_time,
            'wt': waiting_time
        })

    # 5. Display Results
    print("\nP_ID\tAT\tBT\tFT\tTAT\tWT")
    for s in sorted(stats, key=lambda x: x['id']):
        print(f"{s['id']}\t{s['at']}\t{s['bt']}\t{s['ft']}\t{s['tat']}\t{s['wt']}")

if __name__ == "__main__":
    sjf_non_preemptive()
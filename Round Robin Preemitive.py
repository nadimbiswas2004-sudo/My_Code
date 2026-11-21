def round_robin():
    n = int(input("Number of processes: "))
    tq = int(input("Enter Time Quantum: "))
    
    processes = []
    for i in range(n):
        at = int(input(f"P{i+1} Arrival Time: "))
        bt = int(input(f"P{i+1} Burst Time: "))
        # rem = remaining time
        processes.append({'id': i+1, 'at': at, 'bt': bt, 'rem': bt})

    # Sort by arrival time to ensure we start correctly
    processes.sort(key=lambda x: x['at'])
    
    queue = [] # Simple list instead of deque
    current_time = 0
    completed = 0
    results = []
    idx = 0
    
    while completed < n:
        # 1. Add arrived processes to our list-based queue
        while idx < n and processes[idx]['at'] <= current_time:
            queue.append(processes[idx])
            idx += 1
        
        if not queue:
            current_time += 1
            continue
            
        # 2. Get the first process (pop from index 0)
        p = queue.pop(0)
        
        # 3. Execute for TQ or remaining time
        run_time = min(p['rem'], tq)
        p['rem'] -= run_time
        current_time += run_time
        
        # 4. Check for new arrivals while the process was running
        while idx < n and processes[idx]['at'] <= current_time:
            queue.append(processes[idx])
            idx += 1
            
        # 5. Put back in queue if not finished, otherwise record results
        if p['rem'] > 0:
            queue.append(p)
        else:
            completed += 1
            p['ft'] = current_time
            p['tat'] = p['ft'] - p['at']
            p['wt'] = p['tat'] - p['bt']
            results.append(p)

    # Print results sorted by ID
    print("\nID\tAT\tBT\tFT\tTAT\tWT")
    for r in sorted(results, key=lambda x: x['id']):
        print(f"{r['id']}\t{r['at']}\t{r['bt']}\t{r['ft']}\t{r['tat']}\t{r['wt']}")

if __name__ == "__main__":
    round_robin()
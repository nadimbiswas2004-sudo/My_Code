def sjf_preemptive_scheduling():
    n = int(input("Enter number of processes: "))
    processes = []
    
    for i in range(n):
        at = int(input(f"P{i+1} Arrival Time: "))
        bt = int(input(f"P{i+1} Burst Time: "))
        # we keep 'remaining_time' so we don't lose the original 'bt'
        processes.append({'id': i+1, 'at': at, 'bt': bt, 'rem': bt})

    current_time = 0
    completed = 0
    results = []

    print("\n--- Scheduling ---")

    while completed < n:
        # 1. Find all processes that have arrived and aren't finished
        available = [p for p in processes if p['at'] <= current_time and p['rem'] > 0]

        if not available:
            current_time += 1
            continue

        # 2. Pick the process with the SHORTEST REMAINING time
        current_p = min(available, key=lambda x: x['rem'])

        # 3. Process for 1 unit of time
        current_p['rem'] -= 1
        current_time += 1

        # 4. If the process just finished
        if current_p['rem'] == 0:
            completed += 1
            ft = current_time
            tat = ft - current_p['at']
            wt = tat - current_p['bt']
            
            results.append({
                'id': current_p['id'],
                'at': current_p['at'],
                'bt': current_p['bt'],
                'ft': ft,
                'tat': tat,
                'wt': wt
            })

    # Display Results
    print("\nP_ID\tAT\tBT\tFT\tTAT\tWT")
    for r in sorted(results, key=lambda x: x['id']):
        print(f"{r['id']}\t{r['at']}\t{r['bt']}\t{r['ft']}\t{r['tat']}\t{r['wt']}")

if __name__ == "__main__":
    sjf_preemptive_scheduling()
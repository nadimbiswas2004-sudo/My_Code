def fcfs_scheduling():
    # 1. Input: Number of processes
    n = int(input("Enter the number of processes: "))
    processes = []
    
    # 2. Input: Arrival time and Burst time
    for i in range(n):
        print(f"\nProcess {i+1}:")
        arrival_time = int(input("Arrival Time: "))
        burst_time = int(input("Burst Time: "))
        processes.append({
            'id': i + 1,
            'at': arrival_time,
            'bt': burst_time
        })
    
    # 3. Sort processes by Arrival Time (Crucial for FCFS)
    processes.sort(key=lambda x: x['at'])
    
    finish_time = [0] * n
    waiting_time = [0] * n
    turnaround_time = [0] * n
    
    # 4. Calculation Logic
    current_time = 0
    for i in range(n):
        # If CPU is idle, jump to the next process arrival time
        if current_time < processes[i]['at']:
            current_time = processes[i]['at']
        
        finish_time[i] = current_time + processes[i]['bt']
        turnaround_time[i] = finish_time[i] - processes[i]['at']
        waiting_time[i] = turnaround_time[i] - processes[i]['bt']
        
        # Update current time for the next process
        current_time = finish_time[i]

    # 5. Display Results
    print("\n" + "="*50)
    print("P_ID\tAT\tBT\tFT\tTAT\tWT")
    print("-" * 50)
    for i in range(n):
        print(f"{processes[i]['id']}\t{processes[i]['at']}\t{processes[i]['bt']}\t"
              f"{finish_time[i]}\t{turnaround_time[i]}\t{waiting_time[i]}")
    
    # 6. Calculate Averages
    avg_wt = sum(waiting_time) / n
    avg_tat = sum(turnaround_time) / n
    print("-" * 50)
    print(f"Average Waiting Time: {avg_wt:.2f}")
    print(f"Average Turnaround Time: {avg_tat:.2f}")

if __name__ == "__main__":
    fcfs_scheduling()
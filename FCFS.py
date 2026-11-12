def fcfs_scheduling(processes_data):
    # Sort processes by arrival time
    processes_data.sort(key=lambda x: x['arrival_time'])
    
    n = len(processes_data)
    completion_time = 0
    total_waiting_time = 0
    total_turnaround_time = 0
    results = []

    for process in processes_data:
        arrival = process['arrival_time']
        burst = process['burst_time']
        pid = process['pid']

        # The process starts either when it arrives or when the CPU is free
        start_time = max(completion_time, arrival)
        # Waiting time = Start time - Arrival time
        waiting_time = start_time - arrival
        # Completion time = Start time + Burst time
        completion_time = start_time + burst
        # Turnaround time = Completion time - Arrival time
        turnaround_time = completion_time - arrival

        total_waiting_time += waiting_time
        total_turnaround_time += turnaround_time
        results.append({
            'pid': pid,
            'arrival': arrival,
            'burst': burst,
            'waiting': waiting_time,
            'turnaround': turnaround_time,
            'completion': completion_time
        })

    # Calculate averages
    avg_waiting_time = total_waiting_time / n
    avg_turnaround_time = total_turnaround_time / n

    # Display results
    print("Process | Arrival Time | Burst Time | Waiting Time | Turnaround Time | Completion Time")
    print("-" * 80)
    for res in results:
        print(f"  {res['pid']}   |      {res['arrival']:<2}      |     {res['burst']:<2}     |      {res['waiting']:<2}      |       {res['turnaround']:<2}        |        {res['completion']:<2}")

    print(f"\nAverage Waiting Time: {avg_waiting_time:.2f}")
    print(f"Average Turnaround Time: {avg_turnaround_time:.2f}")

# Example Usage
if __name__ == "__main__":
    processes = [
        {'pid': 'P1', 'arrival_time': 0, 'burst_time': 5},
        {'pid': 'P2', 'arrival_time': 2, 'burst_time': 3},
        {'pid': 'P3', 'arrival_time': 4, 'burst_time': 1}
    ]
    
    print("--- FCFS Scheduling Simulation ---")
    fcfs_scheduling(processes)

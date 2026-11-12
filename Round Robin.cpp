#include <iostream>
#include <vector>

using namespace std;

struct Process {
    int id;
    int burstTime;
    int remainingTime;
    int completionTime;
    int turnAroundTime;
    int waitingTime;
};

void calculateRoundRobin(vector<Process>& processes, int quantum) {
    int n = processes.size();
    int currentTime = 0;
    int completed = 0;

    while (completed < n) {
        bool idle = true;
        for (int i = 0; i < n; i++) {
            if (processes[i].remainingTime > 0) {
                idle = false; // CPU is doing work
                
                if (processes[i].remainingTime > quantum) {
                    currentTime += quantum;
                    processes[i].remainingTime -= quantum;
                } else {
                    // Process finishes in this cycle
                    currentTime += processes[i].remainingTime;
                    processes[i].remainingTime = 0;
                    processes[i].completionTime = currentTime;
                    completed++;
                }
            }
        }
        if (idle) currentTime++; // Handle potential idle gaps
    }

    // Calculate TAT and WT
    for (int i = 0; i < n; i++) {
        processes[i].turnAroundTime = processes[i].completionTime; 
        processes[i].waitingTime = processes[i].turnAroundTime - processes[i].burstTime;
    }
}

int main() {
    int n, quantum;
    cout << "Enter number of processes: ";
    cin >> n;
    cout << "Enter Time Quantum: ";
    cin >> quantum;

    vector<Process> processes(n);
    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        cout << "Burst time for P" << i + 1 << ": ";
        cin >> processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime;
    }

    calculateRoundRobin(processes, quantum);

    cout << "\nPID\tBurst\tWait\tTurnaround\n";
    for (auto p : processes) {
        cout << p.id << "\t" << p.burstTime << "\t" << p.waitingTime << "\t" << p.turnAroundTime << endl;
    }

    return 0;
}
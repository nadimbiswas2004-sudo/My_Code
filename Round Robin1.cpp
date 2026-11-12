#include <iostream>
#include <vector>

using namespace std;

struct Process {
    int id, arrivalTime, burstTime, remainingTime, completionTime, turnAroundTime, waitingTime;
};

int main() {
    int n, quantum;
    cout << "Enter number of processes: "; cin >> n;
    cout << "Enter Time Quantum: "; cin >> quantum;

    vector<Process> p(n);
    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cout << "Arrival and Burst time for P" << i + 1 << ": ";
        cin >> p[i].arrivalTime >> p[i].burstTime;
        p[i].remainingTime = p[i].burstTime;
    }

    int currentTime = 0, completed = 0;
    
    // Keep looping until all processes are done
    while (completed < n) {
        bool doneSomething = false;

        for (int i = 0; i < n; i++) {
            // Check if process has arrived and still needs CPU time
            if (p[i].arrivalTime <= currentTime && p[i].remainingTime > 0) {
                doneSomething = true;

                if (p[i].remainingTime > quantum) {
                    currentTime += quantum;
                    p[i].remainingTime -= quantum;
                } else {
                    // Process finishes
                    currentTime += p[i].remainingTime;
                    p[i].remainingTime = 0;
                    p[i].completionTime = currentTime;
                    p[i].turnAroundTime = p[i].completionTime - p[i].arrivalTime;
                    p[i].waitingTime = p[i].turnAroundTime - p[i].burstTime;
                    completed++;
                }
            }
        }

        // If no process was ready to run, just move time forward
        if (!doneSomething) {
            currentTime++;
        }
    }

    // Output results
    cout << "\nPID\tArrival\tBurst\tWait\tTurnaround\n";
    for (int i = 0; i < n; i++) {
        cout << p[i].id << "\t" << p[i].arrivalTime << "\t" << p[i].burstTime << "\t" 
             << p[i].waitingTime << "\t" << p[i].turnAroundTime << endl;
    }

    return 0;
}
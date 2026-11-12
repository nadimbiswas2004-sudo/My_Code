#include <iostream>
using namespace std;

int main() {

    // A[i][0] = Process ID
    // A[i][1] = Arrival Time
    // A[i][2] = Burst Time
    // A[i][3] = Completion Time
    // A[i][4] = Waiting Time
    // A[i][5] = Turnaround Time
    // A[i][6] = Remaining Time

    int A[100][7];
    int n, i, tq, time = 0, completed = 0;
    float total_wt = 0, total_tat = 0;

    cout << "Enter number of process: ";
    cin >> n;

    for(i = 0; i < n; i++) {
        A[i][0] = i+1;

        cout << "P" << i+1 << " Arrival Time: ";
        cin >> A[i][1];

        cout << "P" << i+1 << " Burst Time: ";
        cin >> A[i][2];

        A[i][6] = A[i][2]; // Remaining Time
    }

    cout << "Enter Time Quantum: ";
    cin >> tq;

    while(completed < n) {

        bool found = false;

        for(i = 0; i < n; i++) {

            if(A[i][6] > 0 && A[i][1] <= time) {
                found = true;

                if(A[i][6] > tq) {
                    time += tq;
                    A[i][6] -= tq;
                }
                else {
                    time += A[i][6];

                    A[i][3] = time;                    // CT
                    A[i][5] = A[i][3] - A[i][1];       // TAT
                    A[i][4] = A[i][5] - A[i][2];       // WT

                    total_wt += A[i][4];
                    total_tat += A[i][5];

                    A[i][6] = 0;
                    completed++;
                }
            }
        }

        if(!found) time++; // CPU idle
    }

    cout << "\nP   AT   BT   CT   WT   TAT\n";

    for(i = 0; i < n; i++) {
        cout << "P" << A[i][0] << "   "
             << A[i][1] << "    "
             << A[i][2] << "    "
             << A[i][3] << "    "
             << A[i][4] << "    "
             << A[i][5] << endl;
    }

    cout << "\nAverage Waiting Time = " << total_wt/n;
    cout << "\nAverage Turnaround Time = " << total_tat/n;

    return 0;
}

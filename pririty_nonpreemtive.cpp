
#include <iostream>
using namespace std;

int main() {

    // A[i][0] = Process ID
    // A[i][1] = Arrival Time
    // A[i][2] = Burst Time
    // A[i][3] = Priority
    // A[i][4] = Completion Time
    // A[i][5] = Waiting Time
    // A[i][6] = Turnaround Time

    int A[100][7];
    int n, i, time = 0, completed = 0;
    float total_wt = 0, total_tat = 0;
    bool visited[100] = {false};

    cout << "Enter number of process: ";
    cin >> n;

    for(i = 0; i < n; i++) {
        A[i][0] = i+1;

        cout << "P" << i+1 << " Arrival Time: ";
        cin >> A[i][1];

        cout << "P" << i+1 << " Burst Time: ";
        cin >> A[i][2];

        cout << "P" << i+1 << " Priority: ";
        cin >> A[i][3];
    }

    while(completed < n) {

        int idx = -1;
        int high_pr = 9999;

        for(i = 0; i < n; i++) {
            if(A[i][1] <= time && !visited[i]) {
                if(A[i][3] < high_pr) { // smaller value = higher priority
                    high_pr = A[i][3];
                    idx = i;
                }
            }
        }

        if(idx != -1) {

            time += A[idx][2];

            A[idx][4] = time;                 // Completion Time
            A[idx][6] = A[idx][4] - A[idx][1]; // Turnaround Time
            A[idx][5] = A[idx][6] - A[idx][2]; // Waiting Time

            total_wt += A[idx][5];
            total_tat += A[idx][6];

            visited[idx] = true;
            completed++;
        }
        else {
            time++; // CPU idle
        }
    }

    cout << "\nP   AT   BT   PR   CT   WT   TAT\n";

    for(i = 0; i < n; i++) {
        cout << "P" << A[i][0] << "   "
             << A[i][1] << "    "
             << A[i][2] << "    "
             << A[i][3] << "    "
             << A[i][4] << "    "
             << A[i][5] << "    "
             << A[i][6] << endl;
    }

    cout << "\nAverage Waiting Time = " << total_wt/n;
    cout << "\nAverage Turnaround Time = " << total_tat/n;

    return 0;
}

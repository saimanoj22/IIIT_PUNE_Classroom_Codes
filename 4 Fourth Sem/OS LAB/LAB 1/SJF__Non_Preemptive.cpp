#include <bits/stdc++.h>
using namespace std;

int main(){

    // Input number of process
    int noOfProcess;
    cout << "Enter number of Process : ";
    cin >> noOfProcess;

    // Input burst time for every process
    int burstTime[noOfProcess];
    for(int i = 0; i < noOfProcess; i++){
        cout << "Enter Burst time for Process " << i << " : ";
        cin >> burstTime[i];
    }

    // Sort processes based on burst times
    sort(burstTime, burstTime+noOfProcess);

    // Initializing arrays for waiting time and turn around time
    int waitingTime[noOfProcess], turnAroundTime[noOfProcess];
    waitingTime[0] = 0;
    turnAroundTime[0] = burstTime[0];

    // Initialize total waiting time and total turn around time variables
    float totalWT = waitingTime[0], totalTAT = turnAroundTime[0];

    // Calculating waiting and turn around time for every process
    for(int i = 1; i < noOfProcess; i++){
        waitingTime[i] = waitingTime[i-1] + burstTime[i-1];
        turnAroundTime[i] = waitingTime[i] + burstTime[i];
        totalWT = totalWT + waitingTime[i];
        totalTAT = totalTAT + turnAroundTime[i];
    }

    // Output average waiting  time and average turn around time
    cout << "\nAverage Waiting time : " << totalWT / (float)noOfProcess;
    cout << "\nAverage Turn Around time : " << totalTAT / (float)noOfProcess;

	return 0;
}
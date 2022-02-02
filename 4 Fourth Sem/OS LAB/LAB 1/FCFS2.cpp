#include <bits/stdc++.h>
using namespace std;

int main(){

    // Input number of process
    int noOfProcess;
    cout << "Enter number of Process : ";
    cin >> noOfProcess;

    // Input burst time and arrival time for every process
    vector<vector<int>> x;
    for(int i = 0; i < noOfProcess; i++){
        vector<int> y;
        int burstTime, arrivalTime;
        cout << "Enter Burst time for Process " << i << " : ";
        cin >> burstTime;
        cout << "Enter Arrival time for Process " << i << " : ";
        cin >> arrivalTime;
        y.push_back(arrivalTime);
        y.push_back(burstTime);
        x.push_back(y);
    }
    // Sort processes based on arrival times
    sort(x.begin(), x.end());

    // Initializing arrays for waiting time, turn around time and finish time
    int waitingTime[noOfProcess], turnAroundTime[noOfProcess], finishTime[noOfProcess];

    // Initialize total waiting time and total turn around time variables
    float totalWT = 0, totalTAT = 0;

    // Calculating waiting time, turn around time and finish time for every process
    for(int i = 0; i < x.size(); i++){
        if(i == 0){
            finishTime[i] = x[i][0] + x[i][1];
            turnAroundTime[i] = finishTime[i] - x[i][0];
            waitingTime[i] = turnAroundTime[i] - x[i][1];
        }
        else{
            if(finishTime[i-1] > x[i][0]){
                finishTime[i] = x[i][1] + finishTime[i-1];
            }
            else{
                finishTime[i] = x[i][1] + x[i][0];
            }
            turnAroundTime[i] = finishTime[i] - x[i][0];
            waitingTime[i] = turnAroundTime[i] - x[i][1];
        }
        totalWT += waitingTime[i];
        totalTAT += turnAroundTime[i];
    }

    // Output average waiting  time and average turn around time
    cout << "\nAverage Waiting time : " << totalWT / (float)noOfProcess;
    cout << "\nAverage Turn Around time : " << totalTAT / (float)noOfProcess;
    
	return 0;
} 
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
        y.push_back(burstTime);
        y.push_back(arrivalTime);
        x.push_back(y);
    }

    // Initializing arrays for waiting time, turn around time and finish time
	int waitingTime[noOfProcess], turnAroundTime[noOfProcess];
    
    // Initialize total waiting time and total turn around time variables
    float totalWT = 0, totalTAT = 0;

	int burstTime[noOfProcess];
	for (int i = 0; i < noOfProcess; i++){
		burstTime[i] = x[i][0];
    }

	int finished = 0, time = 0, minimum = INT_MAX, shortest = 0, finishTime;
	bool check = false;

	// Until all processes gets completed
	while (finished != noOfProcess) {

        // Check process with minimum remaining time
		for (int j = 0; j < noOfProcess; j++) {
			if ((x[j][1] <= time) && (burstTime[j] < minimum) && burstTime[j] > 0){
				minimum = burstTime[j];
				shortest = j;
				check = true;
			}
        }
		if (check == false) {
			time++;
			continue;
		}
        // Decrement time by one
		burstTime[shortest]--;
		minimum = burstTime[shortest];
		if (minimum == 0){
			minimum = INT_MAX;
        }
        // Process is completely executed
		if (burstTime[shortest] == 0) {
			finished++;
			check = false;
			finishTime = time + 1;
            // Calculating Waiting time
			waitingTime[shortest] = finishTime - x[shortest][0] - x[shortest][1];
			if (waitingTime[shortest] < 0){
				waitingTime[shortest] = 0;
            }
		}
        // Increment time
		time++;
	}

    // Calculating Turn Around time for every process
	for (int i = 0; i < noOfProcess; i++){
		turnAroundTime[i] = x[i][0] + waitingTime[i];
		totalWT = totalWT + waitingTime[i];
		totalTAT = totalTAT + turnAroundTime[i];
    }

    // Output average waiting  time and average turn around time
    cout << "\nAverage Waiting time : " << totalWT / (float)noOfProcess;
    cout << "\nAverage Turn Around time : " << totalTAT / (float)noOfProcess;


	return 0;
}

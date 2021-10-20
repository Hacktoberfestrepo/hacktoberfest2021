#include<iostream> 

using namespace std; 

void calculateWaitingTime(int n,  int burstTime[], int waitingTime[], int quantum) 
{ 
    int remainingBurstTimes[n]; 
    for (int i = 0 ; i < n ; i++) 
        remainingBurstTimes[i] = burstTime[i]; 

    int currentTime = 0;
    while (true) 
    { 
        bool done = true; 
        for (int i = 0 ; i < n; i++) 
        { 
            if (remainingBurstTimes[i] > 0) 
            { 
                done = false; // There is a pending process 
                if (remainingBurstTimes[i] > quantum) 
                { 
                    currentTime += quantum; 
                    remainingBurstTimes[i] -= quantum; 
                } 

                else
                { 
                    currentTime += remainingBurstTimes[i]; 
                    waitingTime[i] = currentTime - burstTime[i]; 
                    remainingBurstTimes[i] = 0; 
                } 
            } 
        } 

        if (done == true) 
        break; 
    } 
} 

void calculateTurnAroundTime(int n, int burstTime[], int waitingTime[], int turnAroundTime[]) 
{ 
    for (int i = 0; i < n ; i++) 
        turnAroundTime[i] = burstTime[i] + waitingTime[i]; 
} 

void calculateAverageTime(int n, int burstTime[], int quantum) 
{ 
    int waitingTime[n], turnAroundTime[n], totalWaitingTime = 0, totalExecutionTime = 0, totalTurnAroundTime = 0; 
    calculateWaitingTime(n, burstTime, waitingTime, quantum); 
    calculateTurnAroundTime(n, burstTime, waitingTime, turnAroundTime); 

    for (int i=0; i<n; i++) 
    { 
        totalExecutionTime += burstTime[i];
        totalWaitingTime += waitingTime[i]; 
        totalTurnAroundTime += turnAroundTime[i]; 
    } 
    float averageWaitingTime = (float)totalWaitingTime / (float)n; 
    float averageTotalTime =  (float)totalTurnAroundTime / (float)n;
    int averageExecutionTime =  totalExecutionTime / n;
    printf("Average Waiting Time = %f\n", averageWaitingTime);
    printf("Average Execution Time = %d\n", averageExecutionTime);
    printf("Average Turn Around Time = %f\n", (averageWaitingTime + averageExecutionTime));
} 
int main() 
{ 
    int size, timeQuantum, *burstTime;
    cout << "Enter Size: ";
    cin >> size;
    cout << "Enter Time: ";
    cin >> timeQuantum;
    burstTime  = new int[size];
    for(int i=0; i< size; i++)
    {
        printf("Enter Burst Time[%d]: ", i);
        cin >> burstTime[i];
    }
    calculateAverageTime(size, burstTime, timeQuantum); 
    return 0; 
}

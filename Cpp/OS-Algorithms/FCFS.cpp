#include <iostream>

using namespace std;

int main()
{
	int size;
	float *burstTime, *ganttchart, *waitingTime, averageWaitingTime, averageExecutionTime;
	cout << "Enter Size: ";
	cin >> size;
	burstTime = new float [size];
	ganttchart = new float [size];
	waitingTime = new float [size];
	int sum = 0;
	for(int i=0; i<size;i++)
	{
		printf("Enter Burst Time[%d]: ", i);
		cin >> burstTime[i];
		sum += burstTime[i];
		ganttchart[i] = sum;
		if(i == 0)
			waitingTime[i] = 0;
		else if(i > 0)
			waitingTime[i] = ganttchart[i-1];
		averageWaitingTime+=waitingTime[i];
	}
	averageWaitingTime/=size;
	averageExecutionTime = sum/size;
	printf("Average Waiting Time = %f\n", averageWaitingTime);
	printf("Average Execution Time = %f\n", averageExecutionTime);
	printf("Average Turn Around Time = %f\n", (averageWaitingTime + averageExecutionTime));
}

#include <iostream>

using namespace std;


int main()
{
	int size;
	float *burstTime, *waitingTime, averageWaitingTime, averageExecutionTime;
	cout << "Enter Size: ";
	cin >> size;
	burstTime = new float [size];
	waitingTime = new float [size];
	int sum = 0;

	for(int i=0; i< size; i++)
	{
		printf("Enter Burst Time[%d]: ", i);
		cin >> burstTime[i];
	}

    for (int i = 0; i < size-1; i++)    
    {
	    for (int j = 0; j < size-i-1; j++)
	    {
	        if (burstTime[j] > burstTime[j+1])
	        {
	            swap(burstTime[j], burstTime[j+1]);
	        }
	    }
    }
	for(int i=0; i<size;i++)
	{
		sum += burstTime[i];
		averageWaitingTime+=sum;
	}
	averageWaitingTime/=size;
	averageExecutionTime = sum/size;
	printf("Average Waiting Time = %f\n", averageWaitingTime);
	printf("Average Execution Time = %f\n", averageExecutionTime);
	printf("Average Turn Around Time = %f\n", (averageWaitingTime + averageExecutionTime));
}

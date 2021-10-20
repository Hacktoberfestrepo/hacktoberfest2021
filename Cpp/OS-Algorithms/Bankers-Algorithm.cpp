#include <iostream>

using namespace std;

void Bankers_Algorithm(int **alloc, int **max, int *avail, int numberOfProcesses,int numberOfResources)
{
	int tempArray[numberOfProcesses], finalResult[numberOfProcesses];
	for (int i = 0; i < numberOfProcesses; i++)
		tempArray[i] = 0;

	int need[numberOfProcesses][numberOfResources];

	int index=0;
	for (int i = 0; i < numberOfProcesses; i++)
		for (int j = 0; j < numberOfResources; j++)
			need[i][j] = max[i][j] - alloc[i][j];

	for (int k = 0; k < numberOfProcesses; k++)
	{
		for (int i = 0; i < numberOfProcesses; i++)
		{
			if (tempArray[i] == 0)
			{
				int flag = 0;
				for (int j = 0; j < numberOfResources; j++)
				{
					if (need[i][j] > avail[j])
					{
						flag = 1;
						break;
					}
				}

				if (flag == 0)
				{
					finalResult[index++] = i;
					for (int k = 0; k < numberOfResources; k++)
						avail[k] += alloc[i][k];
					tempArray[i] = 1;
				}
			}
		}
	}

	for (int i = 0; i < numberOfProcesses; i++)
		printf("Process[%d]: %d", i, finalResult[i]);
}

int main()
{
	int numberOfResources, numberOfProcesses, **alloc, **max, *avail;
	printf("Enter Number Of Processes: ");
	cin >> numberOfProcesses;
	printf("Enter Number Of Resources: ");
	cin >> numberOfResources;
	alloc = new int*[numberOfProcesses];
	max = new int*[numberOfProcesses];
	avail = new int[numberOfResources];

	for(int i=0; i< numberOfProcesses; i++)
	{
		alloc[i] = new int[numberOfResources];
		for(int j=0; j < numberOfResources; j++)
		{
			printf("Enter Allocation[%d][%d]: ",i, j);
			cin >> alloc[i][j];
		}
	}

	for(int i=0; i< numberOfProcesses; i++)
	{
		max[i] = new int[numberOfResources];
		for(int j=0; j< numberOfResources; j++)
		{
			printf("Enter Max[%d][%d]: ",i, j);
			cin >> max[i][j];
		}
	}

	for(int i=0; i< numberOfResources; i++)
	{
		printf("Enter Available[%d]: ",i);
		cin >> avail[i];
	}

	Bankers_Algorithm(alloc, max, avail, numberOfProcesses, numberOfResources);

}

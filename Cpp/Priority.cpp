#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,p[10],bt[10],wt[10],tat[10],temp,pr[10];
    float awt=0,atat=0;


    cout<<"\nEnter the number of process";
    cin>>n;
    cout<<"\nEnter the process number";
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"\nEnter the Burst number";
    for(i=0;i<n;i++)
    {
        cin>>bt[i];
    }
    cout<<"\nEnter the priority of process";
    for(i=0;i<n;i++)
    {
       cin>>pr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(pr[j]<pr[j+1])
            {
                temp=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;

                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;

                temp=pr[j];
                pr[j]=pr[j+1];
                pr[j+1]=temp;
            }
        }

    }
    cout<<"\n\tProccess\t Priority \tBurst\t\tWaiting\t\tTurnAroundTime";
    for(int i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {

        wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        cout<<"\n\t"<<p[i]<<"\t\t"<<pr[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    awt=awt/n;
    atat=atat/n;
    cout<<"\nAverage waiting time = "<<awt;
    cout<<"\nAverage turn around time = "<<atat;


}


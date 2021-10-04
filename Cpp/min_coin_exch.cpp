//MINIMUM COIN EXCHANGE
/*
coins=[1,3,6,7,10]
*/
#include<iostream>
#include<climits>
using namespace std;

//TOP DOWN
int min_coin_changeTD(int n,int coins[],int T,int dp[]){
	//base case
	if(n==0)
		return 0;
	//Loopup
	if(dp[n]!=0){
		return dp[n];
	}
	//rec case
	int ans=INT_MAX;
	for(int i=0;i<T;i++){
		if(n-coins[i]>=0){
			int subprob=min_coin_changeTD(n-coins[i],coins,T,dp);
			ans=min(ans,subprob+1);
		}
	}
	dp[n]=ans;
	return dp[n];
}

//BOTTOM UP
int min_coin_changeBU(int N,int coins[],int T){

	int dp[100]={0};
	//dp[0]=0;

	//Iterate over all states 1....N
	for(int n=1;n<=N;n++){
		//Initialise the current ans as INT_MAX
		dp[n]=INT_MAX;

		for(int i=0;i<T;i++){
			
			if(n-coins[i]>=0){
				int subprob=dp[n-coins[i]];
				dp[n]=min(dp[n],subprob+1);
			}
		}
	}

	return dp[N];

}

int main()
{	
	int coins[100];
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>coins[i];
	}
	int num;
	cin>>num;
	
	int dp[100]={0};
	cout<<min_coin_changeTD(num,coins,T,dp)<<endl;
	cout<<min_coin_changeBU(num,coins,T)<<endl;
	return 0;
}
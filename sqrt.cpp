#include<bits/stdc++.h>
using namespace std;


float square_root(int num,int p) {
	int s=0;
	int e=num;
	float ans=-1;
	while(s<=e) {
		int mid=s+e>>1; //  (s+e)/2
		if(mid*mid==num) {
			return mid;
		}
		else if(mid*mid>=num) {
			e=mid-1;
			
		}
		else {    //as 7*7 is vey close to 50
			s=mid+1;
			ans=mid;
		}
	}
	
	//for floating part
	//brute force
	float inc=0.1;
	for(int i=1;i<=p;i++) {
		while(ans*ans<=num) {
			ans=ans+inc;
		}
		//when this blows up 
		ans=ans-inc;//comeback 1 step
		inc/=10;
	}
	return ans;

}

int main() {
	int num,p;
	cin>>num;///the input number of which you want to find the square root
	cin>>p;//find the square root upto "p" no of places
	cout<<square_root(num,p)<<endl;
	return 0;
 }

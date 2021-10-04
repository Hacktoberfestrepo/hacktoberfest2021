#include<iostream>
#include<climits>
#include<string>
using namespace std;

string find_window(string s,string p){
	int SL = s.length();
	int PL = p.length();

	//1.Corner Case
	if(PL>SL){
		return "None";
	}

	//2. Freq maps/arrays
	int FS[256]= {0};
	int FP[256]= {0};

	for(int i=0;i<PL;i++){
		char ch = p[i]; 
		FP[ch]++;
	}

	//3. Sliding Window ( Expansion & Contraction + Update th min length Window )
	int cnt=0;
	int start=0;   //left pointer for shrinking the window
	int min_len = INT_MAX;
	int start_idx=0;

	for(int i=0;i<SL;i++){
		char ch = s[i];
		FS[ch]++;

		//does the window contain the pattern

		//Maintain the cnt of characters matched
		if(FP[ch]!=0 and FS[ch]<=FP[ch]){
			cnt++;
		} 

		//if all the characters match
		if(cnt==PL){
			//start shrinking the window from the left

			char temp=s[start];
			//loop to remove all unwanted characters
			while(FP[temp]==0 or FS[temp]>FP[temp]){
				//just ignore the current character
				FS[temp]--;
				start++;
				temp=s[start];
			}

			//you get the minimum window when out of the loop
			//window size
			int window_len = i-start+1;
			if(window_len<min_len){
				min_len=window_len;
				start_idx=start;
			}
		}
	}
	if(start_idx==-1){
		return "None";
	}


	string ans=s.substr(start_idx,min_len);
	return ans;

}

int main()
{
	string s ="heelleeoaeoe world";
	string p ="eelo";
	cout<<find_window(s,p)<<endl;

	return 0;
}
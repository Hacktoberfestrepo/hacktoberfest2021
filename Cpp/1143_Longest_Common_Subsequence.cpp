/*
Link of the question : https://leetcode.com/problems/longest-common-subsequence 
Problem No. 1143.

Given: Two strings of different length we will be finding longest common subsequence of them.
## Subsequence means that the sequence of occuring should be same , its not necessary to be continous.

Eg :

string a = "amitesh" and string b = "abmit"


The sequence of occuring of "amit" in both the strings are same , so it is a common subsequence.

 */


// My code

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vvi  vector<vector<int> >
#define vl vector<ll>
#define vvl vector<vector<ll> >
#define pi pair<int, int>
#define pl pair<ll, ll>
#define fora(i, a, n) for(ll i = a; i < n; i++)
#define T int tt; cin >> tt; while(tt--)

int dp[1001][1001];
int helper(string &text1,int i , string &text2,int j){     // helper recursive function to calculate all the common subsequence                              
    
    if(i==text1.length() || j==text2.length())      // Base condition when we will reach at the end of the string we will return 0
        return 0;
    if(dp[i][j]!=-1)                     // using the stored answer , so that it doesnt need to calculate it again
        return dp[i][j];
        
    if(text1[i]==text2[j])
        return dp[i][j] = 1+helper(text1,i+1,text2,j+1);   // memoization , we are storing answer to use in future
    else
        return dp[i][j] = max(helper(text1,i+1,text2,j),helper(text1,i,text2,j+1));
    }


int longestCommonSubsequence(string text1, string text2)
{
    memset(dp,-1,sizeof(dp));          // intializing it with -1
    return helper(text1,0,text2,0);
}

int main(){ 
ios_base::sync_with_stdio(0); cin.tie(0); 

string a,b;
cin>>a>>b;
cout<<longestCommonSubsequence(a,b);

return 0;
}

/*
 Input: num1 = "amitesh", num2 = "abmgit"
 Output: 4

 Time complexity: O(m*n)        // Recursive Solution using memoization
 Space Complexity: O(m*n)      // Storing 2D matrix for memoization

 m and n are size of string 7 and 6

 */

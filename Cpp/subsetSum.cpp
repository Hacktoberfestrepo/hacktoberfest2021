// Problem Link: https://www.geeksforgeeks.org/subset-sum-problem-dp-25/

#include <iostream>
using namespace std;

bool isSubsetSum(int set[], int n, int sum)
{
    // The value of subset[i][j] will be true if there is a subset of set[0..j-1] with sum equal to i
    bool subset[n + 1][sum + 1];
 
    // If sum is 0, then answer is always true
    for (int i = 0; i <= n; i++)
        subset[i][0] = true;
 
    // If sum is not 0 and set is empty,
    // then answer is false
    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;
 
    // Fill the subset table in bottom up manner
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j]
                               || subset[i - 1][j - set[i - 1]];
        }
    }
 
    return subset[n][sum];
}
 
// Driver code starts
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum;
        cin>>n>>sum;
        
        int arr[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if (isSubsetSum(arr, n, sum) == true)
            cout <<"Found a subset with given sum";
        else
            cout <<"No subset with given sum";
        return 0;
    }
}
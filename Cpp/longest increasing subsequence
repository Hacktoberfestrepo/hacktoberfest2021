int lcs(int x, int y, int s1[], vector<int> s2)
    {
        // your code here
        int dp[x+1][y+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[x][y];
         
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
       set<int> s;
       for(int i=0;i<n;i++)
       s.insert(a[i]);
       vector<int> v;
       for(auto x:s)
       v.push_back(x);
       return lcs(n,v.size(),a,v);
       
       
    }


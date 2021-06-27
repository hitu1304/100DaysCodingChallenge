//dp

int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(S1[i-1]==S2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }else
                {
                    dp[i][j]=0;
                }
            }
        }
       
      int max=INT_MIN;
      for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(max<dp[i][j])
                max=dp[i][j];
            }
        }return max;
    }

/*Expected Time Complexity: O(n*m).
Expected Auxiliary Space: O(n*m).*/
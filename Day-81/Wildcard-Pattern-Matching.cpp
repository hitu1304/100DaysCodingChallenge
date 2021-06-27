//dp

int wildCard(string pattern,string str)
    {
       int m=pattern.length();
        int n=str.length();
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for (int j = 1; j <= m; j++)
        if (pattern[j - 1] == '*')
            dp[j][0] = dp[j-1][0];
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(pattern[i-1]==str[j-1] || pattern[i-1]=='?')
                {
                    dp[i][j]=dp[i-1][j-1];
                }else if(pattern[i-1]=='*')
                {
                    dp[i][j]=(dp[i-1][j] || dp[i][j-1]);
                }else 
                {
                    dp[i][j]=0;
                }
            }
        }return dp[m][n];
        
        
    }

/*Expected Time Complexity: O(n*m).
Expected Auxiliary Space: O(n*m).*/
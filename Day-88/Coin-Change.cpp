//dp

long long int count(int S[], int m, int n)
    {
        
       vector<vector<long long int>>dp(m+1,vector<long long int >(n+1,0));
       for(long long int i=0;i<=m;i++)
       {
           dp[i][0]=1;
       }
       for(long long int i=1;i<=m;i++)
       {
           for(long long int j=1;j<=n;j++)
           {
              if(j<S[i-1])
               {
                   dp[i][j]=dp[i-1][j];
               }else 
               {
                   dp[i][j]=dp[i-1][j]+dp[i][j-S[i-1]];
               }
           }
       }
       
      return dp[m][n];
    }
/*Expected Time Complexity: O(m*n).
Expected Auxiliary Space: O(n).*/
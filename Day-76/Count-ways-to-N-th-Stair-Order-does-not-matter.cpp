//dp


int  rec(int n,int dp[])
   {
       dp[0]=1;
       dp[1]=1;
       for(int i=2;i<=n;i++)
       {
           dp[i]=1+dp[i-2];
       }
       return dp[n];
   }
    long long countWays(int m)
    {
        int dp[m+1];
        return rec(m,dp);
       
    }

/* Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N).*/
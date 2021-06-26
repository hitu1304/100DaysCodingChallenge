//dp

int countWays(int n)
    {
        int mod = pow(10,9)+7;
        int dp[n];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]%mod+dp[i-2]%mod;
        }return dp[n]%mod;
    }

/*Expected Time Complexity : O(n)
Expected Auxiliary Space: O(1).*/
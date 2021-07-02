//dp

long long mod=pow(10,9)+7;
    public:
    int rec(int n,long long  dp[])
    {
    if(n==0)return 1;
    if(n<0)return 0;
    if(dp[n]!=-1)return dp[n]%mod;
    int x=rec(n-1, dp)%mod;
    int y=rec(n-2,dp)%mod;
    int z=rec(n-3,dp)%mod;
    return dp[n]=(x%mod+y%mod+z%mod)%mod;
    }
    long long countWays(int n)
    {
        long long  dp[n+1];
        memset(dp,-1,sizeof(dp));
       return rec(n,dp)%mod;
        
    }

/*Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).*/
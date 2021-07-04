//dp

class Solution
{
    public:
    int dp[201][201];
    int rec(int n,int f)
    {
        if( f==1)return 1;
        if(n==1)return f;
        if(n==0 || f==0)return 0;
        if(dp[n][f]!=-1)return dp[n][f];
        int m = INT_MAX;
        for(int i=1;i<=f;i++)
        {
            max(rec(n-1,i-1),rec(n,f-i));
            
            m=min(m,max(rec(n-1,i-1),rec(n,f-i)));
            
        }
        return dp[n][f]= m+1;
     }
    int eggDrop(int n, int k) 
    {
        memset(dp,-1,sizeof(dp));
        return rec(n,k);
    }
};

/*Expected Time Complexity : O(N*K)
Expected Auxiliary Space: O(N*K).*/
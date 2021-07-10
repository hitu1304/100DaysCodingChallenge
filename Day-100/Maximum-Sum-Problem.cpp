//dp

class Solution
{
    public:
    int m=INT_MIN;
    int dp[1000000];
    int rec(int n)
    {
        if(n==0 || n==1)return n;
        if(dp[n]!=-1)return dp[n];
        int x=rec(n/2);
        int y=rec(n/3);
        int z=rec(n/4);
        return dp[n]=max(x+y+z,n);
        
        
    }
    
        int maxSum(int n)
        {
            memset(dp,-1,sizeof(dp));
            return rec(n);
        }
};

/*Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n).*/
//dp

class Solution{
public:

    int rec(int i,int n,int w,int val[],int wt[],vector<vector<int>>&dp)
    {
        if(i>=n)return 0;
        
        if(w==0)return 0;
        
        if(dp[i][w]!=-1)return dp[i][w];
        
        if(wt[i]<=w)
        {
            int left =rec(i,n,w-wt[i],val,wt,dp)+val[i];
            int right = rec(i+1,n,w,val,wt,dp);
            return dp[i][w]=max(left,right);
        }
        else
        {
            return dp[i][w]=rec(i+1,n,w,val,wt,dp);
        }
      }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N,vector<int>(W+1,-1));
       int ans= rec(0,N,W,val,wt,dp);
        return ans;
    }
};

/*Expected Time Complexity: O(N*W)
Expected Auxiliary Space: O(W)*/
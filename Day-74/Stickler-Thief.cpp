//dp

class Solution
{
    public:
   int  rec(int arr[],int i,int n,int dp[])
    {
        if(i>=n )return 0;
      if(dp[i]!=-1)return dp[i];
        int left = rec(arr,i+2,n,dp)+arr[i];
        int right =  rec(arr,i+1,n,dp);
        
        return dp[i]= max(left,right);
    }
    
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
       int m[n];
       memset(m,-1,sizeof(m));
       
       return  rec(arr,0,n,m);
    }
};

/*Expected Time Complexity: O(N).
Expected Space Complexity: O(N).*/
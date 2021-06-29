//dp

int rec(int arr[],int n,int i,int dp[])
	{
	    if(i>=n)return 0;
	    if(dp[i]!=-1)return dp[i];
	    int left=rec(arr,n,i+2,dp)+arr[i];
	    int right = rec(arr,n,i+1,dp);
        return dp[i]= max(left,right);	    
	    
	}
	
	int findMaxSum(int *arr, int n) {
	   int dp[n+1];
	   memset(dp,-1,sizeof(dp));
	  return  rec(arr,n,0,dp);
	}

//TC-> O(n).
//SP-> O(n).
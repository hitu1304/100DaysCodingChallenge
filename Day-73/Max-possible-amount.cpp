//dp

int rec(int i,int j,int arr[],int dp[1000][1000])
	{
	    if(i>j) return 0;
	    if(dp[i][j]!=-1)return dp[i][j];
	    
	int x=   min (rec(i+1,j-1,arr,dp), rec(i+2,j,arr,dp))+arr[i];
	int y = min(rec(i,j-2,arr,dp), rec(i+1,j-1,arr,dp))+arr[j];
	
	return dp[i][j] =max (x,y);
	}
	
	
	int maxAmount(int arr[], int n)
	{
		int dp[1000][1000];
	
		memset(dp,-1,sizeof(dp));
		return rec(0,n-1,arr,dp);

	}

/*Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N2)*/
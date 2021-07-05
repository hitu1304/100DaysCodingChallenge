// use Lis

int minInsertions(int arr[], int N) 
	{ 
	   
	   int dp[N];
	   dp[0]=1;
	   for(int i=1;i<N;i++)
	   {
	       dp[i]=1;
	       for(int j=0;j<i;j++)
	       {
	           if(arr[i]>=arr[j] && dp[i]<=dp[j])
	           dp[i]=1+dp[j];
	       }
	   }
	    return N-*max_element(dp,dp+N);
	} 

/*Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N).*/
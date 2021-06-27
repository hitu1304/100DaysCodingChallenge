//dp

int perfectSum(int arr[], int n, int sum)
	{
	    int mod=pow(10,9)+7;
       int dp[n+1][sum+1];
       for(int i=0;i<=n;i++)
       {
           dp[i][0]=1;
       }
       for(int i=1;i<=sum;i++)
       {
           dp[0][i]=0;
       }
       
       for(int i=1;i<=n;i++)
       {
           for(int j=0;j<=sum;j++)
           {
               if(j<arr[i-1])
               {
                   dp[i][j]=dp[i-1][j]%mod;
               }else
               {
                   dp[i][j]=(dp[i-1][j]%mod+(dp[i-1][j-arr[i-1]])%mod)%mod;
               }
           }
       }return dp[n][sum];
	}

/*Expected Time Complexity: O(N*sum)
Expected Auxiliary Space: O(N*sum)*/
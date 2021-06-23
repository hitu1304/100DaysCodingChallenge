//dp

int equalPartition(int N, int arr[])
    {
        int sum = accumulate(arr,arr+N,0);
        int s=sum;
        sum/=2;
       bool dp[N+1][sum+1];
       
       if(s%2!=0)
       return false;
       else
       {
       for(int i=0;i<=N;i++)
       dp[i][0]=true;
       
        for(int i=1;i<=sum;i++)
        dp[0][i]=false;
        
        for(int i=1;i<=N;i++)
        {
            for(int j=1 ;j<=sum;j++)
            {
                
                if(j<arr[i-1])
                dp[i][j]=dp[i-1][j];
                else{
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
                
            }
        }return dp[N][sum];
       }
    }
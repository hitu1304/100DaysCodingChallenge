//dp

class Solution{   
public:
int rec(int i,int j,int arr[],int dp[1000][1000])
{
    if(i>j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int x=   min (rec(i+1,j-1,arr,dp), rec(i+2,j,arr,dp))+arr[i];
	int y = min(rec(i,j-2,arr,dp), rec(i+1,j-1,arr,dp))+arr[j];
	
	return dp[i][j] =max (x,y);
  }
bool is1winner(int N,int arr[]) {
        
        int sum= accumulate(arr,arr+N,0);
        int dp[1000][1000];
        memset(dp,-1,sizeof(dp));
        int ans1 = rec(0,N-1,arr,dp);
       
        if(ans1>sum/2)return 1;
        return 0;
    }
};

/*Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(N).*/
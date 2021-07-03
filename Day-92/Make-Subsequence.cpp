//dp

class Solution {
  public:
  int dp[1000][1000];
  
  int rec(int a[],int b[],int n1,int n2,int i,int j)
  {
      
      if(i>=n1 || j>=n2)return 0;
      
      if(dp[i][j]!=-1)return dp[i][j];
      
      if(a[i]==b[j])return 1+rec(a,b,n1,n2,i+1,j+1);
      else
      {
          int x=rec(a,b,n1,n2,i,j+1);
          int y = rec(a,b,n1,n2,i+1,j);
          return dp[i][j]= max(x,y);
      }
  }
  int makeSubsequences(int A[], int B[], int N, int M) {
       
       memset(dp,-1,sizeof(dp));
       int ans = rec(A,B,N,M,0,0);
       return N-ans;
    }
};

/*Expected Time Complexity: O(N*M).
Expected Auxiliary Space: O(N).*/
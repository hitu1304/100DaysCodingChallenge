//dp

int rec(int i,int j, vector<vector<int>>&dp,int a,int b)
    {
       
        if(i==a-1 && j==b-1)return 1;
        if(i>a || j>b)return 0;
        int x = rec(i+1,j,dp,a,b);
       int  y = rec(i,j+1,dp,a,b);
        return x+y;
    }
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>>dp(a,vector<int>(b,0));
      int ans=  rec(0,0,dp,a,b);
       return ans ;
       
    }

/* Expected Time Complexity: O(A*B).
Expected Auxiliary Space: O(A*B).*/
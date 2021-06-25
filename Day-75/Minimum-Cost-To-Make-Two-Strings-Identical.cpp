//dp

int rec(int i,int j,string s1,string s2,vector<vector<int>>&dp)
	{
	    int m= s1.length();
	    int n= s2.length();
	    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
 
            else if (s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
 
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }return dp[m][n];
	    
	}
	
	int findMinCost(string X, string Y, int costX, int costY)
	{
	    
	    vector<vector<int>>dp(X.length()+1,vector<int>(Y.length()+1,0));
	   int ans = rec(0,0,X,Y,dp);
	   
	   return ((X.length()-ans)*costX +(Y.length()-ans)*costY);
	   
	}

/* Expected Time Complexity: O(|X|*|Y|)
Expected Space Complexity: O(|X|*|Y|).*/
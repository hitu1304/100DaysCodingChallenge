//dp 

int rec(string s1,string s2,int dp[1000][1000])
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
	
    int findMinInsertions(string S){
       string s=S;
       
       reverse(s.begin(),s.end());
       int dp[1000][1000];
       
       return S.length()-rec(S,s,dp);
       
    }

/* Expected Time Complexity: O(|S|2)
Expected Auxiliary Space: O(|S|2).*/
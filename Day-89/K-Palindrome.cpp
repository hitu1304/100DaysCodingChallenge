// using lcs we can easily solve this problem

bool is_k_palin(string s,int k)
{
    string s2=s;
    int m=s.length();
    reverse(s2.begin(),s2.end());
    int dp[101][101];
   
	  
	    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
 
            else if (s[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
 
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
        return (s.size()-dp[m][m])<=k?1:0;
}

/*Expected Time Complexity: O(m*n).
Expected Auxiliary Space:O(m*n).*/
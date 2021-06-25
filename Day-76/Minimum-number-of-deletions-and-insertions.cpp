//dp

int lcs(int i,int j,string s1,string s2,vector<vector<int>>&dp)
	{
	    int m=s1.length();int n=s2.length();
	    
	    for(int i=0;i<=m;i++)
	    {
	        for(int j=0;j<=n;j++)
	        {
	            if(i==0|| j==0)
	            {
	                dp[i][j]=0;
	            }else if(s1[i-1]==s2[j-1])
	            {
	                dp[i][j]=1+dp[i-1][j-1];
	            }else
	            {
	                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
	            }
	        }
	    }return dp[m][n];
	}
	int minOperations(string str1, string str2) 
	{
	    vector<vector<int>>dp(str1.length()+1,vector<int>(str2.length()+1,-1));
	  int ans = lcs(0,0,str1,str2,dp);
	  int m=str1.length();int n=str2.length();
	  
	  return (m-ans)+(n-ans);
	}

/*Expected Time Complexity: O(|str1|*|str2|)
Expected Space Complexity: O(|str1|*|str2|).*/
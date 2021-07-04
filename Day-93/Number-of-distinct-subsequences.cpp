//dp


int distinctSubsequences(string s)
	{
	    int n=s.length();
	    int mod = pow(10,9)+7;
	   int dp[n+1];
	   dp[0]=1;
	   unordered_map<char,int>m;
	   
	   for(int i=1;i<=n;i++)
	   {
	       dp[i]=((dp[i-1]%mod)*2)%mod;
	       
	       if(m.find(s[i-1])!=m.end())
	       {
	           auto j=m.find(s[i-1]);
	          
	          dp[i] =  (mod+(dp[i]  -   dp[j->second-1])%mod)%mod;
	          
	       }m[s[i-1]]=i;
	   }return dp[n]%mod;
	   
	}

/*Expected Time Complexity: O(|str|)
Expected Auxiliary Space: O(|str|).*/
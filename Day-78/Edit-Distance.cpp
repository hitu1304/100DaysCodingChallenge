//dp

int rec(int i,int j,string s1,string s2,vector<vector<int>>&dp)
  {
      
      
      if(i==s1.size())return s2.size()-j;
      if(j==s2.size())return s1.size()-i;
      if(dp[i][j]!=-1)return dp[i][j];
      if(s1[i]==s2[j])return dp[i][j] = rec(i+1,j+1,s1,s2,dp);
      else
      {
          //insert
          int insert = 1+rec(i,j+1,s1,s2,dp);
          //remove
          int remove = 1+rec(i+1,j,s1,s2,dp);
          //replace
          int replace = 1+rec(i+1,j+1,s1,s2,dp);
          return dp[i][j]= min(replace,min(insert,remove));
      }
  }
  int editDistance(string s, string t) {
        
        vector<vector<int>>dp(s.length(),vector<int>(t.length(),-1));
        
        return rec(0,0,s,t,dp);
    }

/* Expected Time Complexity: O(|s|*|t|)
Expected Space Complexity: O(|s|*|t|).*/
//dp

class Solution
{
    public:
    
    int lcs(int i,int j,string s1,string s2,vector<vector<int>>&dp)
    {
        
        //base case
        if(i>=s1.size() || j>=s2.size())
        return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(s1[i]==s2[j])return 1+lcs(i+1,j+1,s1,s2,dp);
        else
        {
            int left=lcs(i,j+1,s1,s2,dp);
            int right =lcs(i+1,j,s1,s2,dp);
            return dp[i][j]=max(left,right);
        }
        
        
    }
    
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
       vector<vector<int>>dp(x,vector<int>(y,-1));
       
      int ans= lcs(0,0,s1,s2,dp);
       return ans;
    }
};

/*Expected Time Complexity : O(|str1|*|str2|)
Expected Auxiliary Space: O(|str1|*|str2|)*/
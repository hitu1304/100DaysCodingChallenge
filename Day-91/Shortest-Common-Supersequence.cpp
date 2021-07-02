//dp

class Solution
{
    public:
    
    int scs(int i,int j,string s1,string s2,vector<vector<int>>&dp)
    {
        if(i>=s1.size() || j>=s2.size())return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(s1[i]==s2[j])return 1+scs(i+1,j+1,s1,s2,dp);
        else
        {
            int left =scs(i+1,j,s1,s2,dp);
            int right=scs(i,j+1,s1,s2,dp);
            return dp[i][j]=max(left,right);
        }
     }
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        int ans=scs(0,0,X,Y,dp);
        return (m+n-ans);
    }
};

/*Expected Time Complexity: O(Length(X) * Length(Y)).
Expected Auxiliary Space: O(Length(X) * Length(Y)).*/
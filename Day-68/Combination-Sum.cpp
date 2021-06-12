//Use Recursive approach.

class Solution 
{
    public:
    void comb(int i, vector<int>a,int b, vector<int>&v,vector<vector<int> >&ans)
    {
        if(i==a.size())
        {
            if(b==0)
            {
                ans.push_back(v);
            }return;
        }
        if(a[i]<=b)
        {
            v.push_back(a[i]);
            comb(i,a,b-a[i],v,ans);
            v.pop_back();
        }
        comb(i+1,a,b,v,ans);
    }
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
       vector<vector<int> >ans;
       vector<int>v;
       set<int>s(A.begin(),A.end());
       vector<int>a(s.begin(),s.end());
       comb(0,a,B,v,ans);
       sort(ans.begin(),ans.end());
       return ans;
    }
};

/*Expected Time Complexity: O(X2 * 2N), where X is average of summation B/arri for every number in the array.
Expected Auxiliary Space: O(X * 2N).*/
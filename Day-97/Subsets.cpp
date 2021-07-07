//use recursion

class Solution
{
public:
vector<vector<int> >v;
  void sub(vector<int>a,vector<int>c={},int i=0)
{
    int n=a.size();
    if(n==i){
        v.push_back(c);
        return;
    }
    c.push_back(a[i]);
    sub(a,c,i+1);
    c.pop_back();
    sub(a,c,i+1);
}  
    vector<vector<int> > subsets(vector<int>& A)
    {vector<int>c={};
        //code here
        sub(A);
        sort(v.begin(),v.end());
        return v;
    }
};

/*Expected Time Complexity : O(2^n)))
Expected Auxiliary Space : O(2^n*length of each subset).*/
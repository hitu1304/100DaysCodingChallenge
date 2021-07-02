//sorting using comperators.

class Solution
{
    public:
    static bool comp(pair<int,int>a,pair<int,int>b)
  {
      return a.second<b.second;
  }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++)v.push_back({start[i],end[i]});
        
        sort(v.begin(),v.end(),comp);
        int c=0,last=0;
        for(int i=0;i<n;i++)
        {
            if(v[i].first>last)
            {
                c++;
                last=v[i].second;
            }
        }return c;
    }
};

/*Expected Time Complexity : O(N * Log(N))
Expected Auxilliary Space : O(N).*/
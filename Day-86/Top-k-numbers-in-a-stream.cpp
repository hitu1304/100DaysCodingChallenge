//use map(sorting with comperator)

class Solution
{
  public:
  
  static bool comp(pair<int,int>a,pair<int,int>b)
  {
      
      if(a.second!=b.second)
      return a.second<b.second;
      else
      return a.first>b.first;
      
  }
  
    vector<int> kTop(int a[], int n, int k) 
    { 
        map<int ,int>m;
        vector<int>v;
        vector<int>ans;
         vector<pair<int,int>>v1;
       
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
            for(auto x: m)
            {
                
                v1.push_back({x.first,x.second});
            
            }
            
            sort(v1.begin(),v1.end(),comp);
            int m;
            if(v1.size()>k)
            m=k;
            else
            m=v1.size();
            reverse(v1.begin(),v1.end());
            for(int i=0;i<m;i++)
             v.push_back(v1[i].first);
            
             v1.clear();
             ans.insert(ans.end(),v.begin(),v.end());
             v.clear();
            
        }
        return ans;
    }
};

/* Expected Time Complexity: O(N*K).
Expected Auxiliary Space: O(N).*/


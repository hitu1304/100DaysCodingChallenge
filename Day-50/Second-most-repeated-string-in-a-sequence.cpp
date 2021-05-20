// use map

class Solution
{
  public:
  static  bool comp(pair<string,int>a,pair<string,int>b)
  {
      if(a.second!=b.second)
      return a.second<b.second;
      else
      return a.first<b.first;
      
      
  }
    string secFrequent (string arr[], int n)
    {
        map<string,int>m;
        vector<pair<string,int>>v;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto x:m)
        {
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),comp);
       return  v[v.size()-2].first;
    }
};

// Time Complexity: O(N*max(|Si|).
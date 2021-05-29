// Use rcursive approach.

class Solution 
{
    public:vector<int>v;
    void solve(int i,vector<int> &v1,vector<int> adj[])
  {
      v1[i]=1;
      v.push_back(i);
      for(auto x:adj[i])
      {
          if(!v1[x])
          {
              solve(x,v1,adj);
          }
      }
      
      
  }
	
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    v.clear();
	    vector<int>v1(V,0);
	    solve(0,v1,adj);
	    return v;
	}
};

//Time Complexity: O(V + E).
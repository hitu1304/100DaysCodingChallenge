// Use Dfs

class Solution
{
	public:
	stack<int>s;
	void dfs(int i,vector<int>&v,vector<int> adj[])
	{
	    v[i]=1;
	    for(auto x:adj[i])
	    {
	        if(!v[x])
	        {
	            dfs(x,v,adj);
	        }
	    } s.push(i);
	 }
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>v(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(!v[i])
	        {
	            dfs(i,v,adj);
	        }
	    }
	    vector<int>v1;
	    while(!s.empty())
	    {
	        v1.push_back(s.top());
	        s.pop();
	    }return v1;
	}
};

//Expected Time Complexity: O(V + E).
//Expected Auxiliary Space: O(V).
// Traversal


class Solution 
{
    public:
	//Function to return the adjacency list for each vertex.
	vector<vector<int>>p;
	vector<int >v;
	vector<vector<int>>printGraph(int V, vector<int> adj[])
	{
	  int i=0;
	   for(int i=0;i<V;i++ )
	   {
	       v.push_back(i);
	       for(int j=0;j<adj[i].size();j++)
	       {
	           v.push_back(adj[i][j]);
	       }p.push_back(v);
	       v.clear();
	   }
	  return p;
     }
};

//Time Complexity: O(V + E).
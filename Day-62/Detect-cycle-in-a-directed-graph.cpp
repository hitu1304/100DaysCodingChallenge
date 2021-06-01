//Solve using DFS

class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	vector<int>ans;
bool cycle(int &i,vector<int>&v,vector<int>&dv,vector<int> adj[])
	{
	    v[i]=1;
	    dv[i]=1;
	    
	    for(auto x:adj[i])
	    {
	        if(!v[x])
	        {
	            if(cycle(x,v,dv,adj))
	            return true;
	        }else if(dv[x])
	        {
	            return true;
	        }
	    }dv[i]=0;
	    return false;
	}
 bool isCyclic(int V, vector<int> adj[]) 
	{
	   	vector<int>v(V,0);
	   	vector<int>dv(V,0);
	   	int i=0;
	   	for(i=0;i<V;i++)
	   	{
	   	    if(!v[i]){
	   	if(cycle(i,v,dv,adj))
	   	return true;}
	   	}return false;
	}
};

// Time Complexity: O(V + E).
//solve suing bfs traversal

class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool bfs(int i,int p,vector<bool >&v,vector<int>adj[])
    {
        v[i]=true;
        for(auto x:adj[i])
        {
            if(!v[x])
            {
                 if(bfs(x,i,v,adj))
                 return true;
            }else if(x!=p){
            return true;}
        }return false;
     }
    
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<bool>v(V,false);
	    int i=0;
	    for(i=0;i<V;i++)
	    {
	        if(!v[i]){
	        bool c=bfs(i,-1,v,adj);
	        if(c)
	        return true;}
	        
	    }return false;
	}
};

//Time Complexity: O(V + E).
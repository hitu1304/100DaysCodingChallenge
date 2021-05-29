// Do like level order traversal in tree

class Solution
{
    public:
    vector<int>v;
  
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	   vector<int>v1(V,0);
	   vector<int >v;
	   queue<int>q;
	   q.push(0);
	   v1[0]=1;
	   while(!q.empty())
	   {
	       int s=q.front();
	       q.pop();
	       v.push_back(s);
	       for(auto i:adj[s])
	       {
	           if(!v1[i])
	           {
	               v1[i]=1;
	               q.push(i);
	          }
	       }
	   }return v;
	}
};

//Time Complexity: O(V + E).
// use BFS approaach

bool cycleBsf(int &i ,vector<int>&col,vector<int>adj[])
    {
        queue<int>q;
        q.push(i);
        col[i]=1;
        while(!q.empty())
        {
            int a=q.front();
            q.pop();
            for(auto x:adj[a])
            {
                if(col[x]==-1)
                {
                    col[x]=1-col[a];
                    q.push(x);
                }else if(col[x]==col[a])
                {
                    return false;
                }
             }
       }return true;
    }
   bool isBipartite(int V, vector<int>adj[]){

        vector<int>col(V,-1);
        for(int i=0;i<V;i++)
        {
            if(col[i]==-1)
            {
                if(!cycleBsf(i,col,adj))
                    return false;
            }
         }return true;

	}

//Time Complexity: O(V).
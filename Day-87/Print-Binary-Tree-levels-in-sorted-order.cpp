// use priority queue

vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
        vector <vector <int>>ans;
        vector <int>v;
       int i,j;
       for( i=0;i<n;)
       {
           priority_queue<int,vector<int>,greater<int>>q;
           
           int m;
           if(i*2>n-1)
           m=n-1;
           else
           m=i*2;
           
           
           for( j=i;j<=m;j++)
           {
               q.push(arr[j]);
           }i=j;
           while(!q.empty())
           {
               v.push_back(q.top());
               q.pop();
           }ans.push_back(v);
           v.clear();
       }return ans;
       
       
    }

/*Expected Time Complexity: O(NlogN).
Expected Auxiliary Space: O(N)*/
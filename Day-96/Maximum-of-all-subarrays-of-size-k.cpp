// use heap

vector <int> max_of_subarrays(int *arr, int n, int k)
    {
       vector<int>v;
        multiset<int>s;
        
        for(int i=0;i<k;i++)s.insert(arr[i]);
        
        
        for(int i=0;i<=n-k;i++)
        {
            
            v.push_back(*s.rbegin());
            auto it =s.find(arr[i]);
            if(it!=s.end())
            s.erase(it);
            s.insert(arr[i+k]);
        }return v;
    }

/*Expected Time Complexity: O(N)
Expected Auxiliary Space: O(k).*/
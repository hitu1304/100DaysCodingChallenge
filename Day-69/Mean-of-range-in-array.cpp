// brute force

vector<int> findMean(int arr[],int queries[],int n,int q)
    {
        vector<int>v;
        int s=0;
        for(int i=1;i<n;i++)
        {
            arr[i]+=arr[i-1];
        }
        for(int i=1;i<q;i+=2)
        {
            if(queries[i-1]==0)
             s=arr[queries[i]];
            else
             s=arr[queries[i]]-arr[queries[i-1]-1];
            int e=queries[i]-queries[i-1]+1;
            v.push_back(s/e);
        }return v;
    }

/*Expected Time Complexity: O(q + n).
Expected Auxiliary Space: O(n).*/
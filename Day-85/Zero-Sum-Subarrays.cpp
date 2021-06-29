//prefix sum

ll findSubarray(vector<ll> arr, int n ) {
        
         unordered_map<int,int>m;
         int sum=0,c=0;
         m[sum]++;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(m.find(sum)!=m.end())
            c+=m[sum];
            m[sum]++;
       }
       return c;
    }

/*Expected Time Complexity : O(n)
Expected Auxilliary Space : O(n)*/
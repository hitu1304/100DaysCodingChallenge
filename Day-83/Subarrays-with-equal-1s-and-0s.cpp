// use hashmap

long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
       unordered_map<int ,int>m;
       int sum=0,ans=0;
       m[sum]++;
       for(int i=0;i<n;i++)
       {
           sum+=arr[i]==0?-1:1;
           
           if(m.find(sum)!=m.end())
           {
               ans+=m[sum];
               
           }
           m[sum]++;
       }
       return ans;
    }

/* Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).*/
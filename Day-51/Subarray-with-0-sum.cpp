/*Approach-> Iterate through the array and for every element arr[i], calculate prefix sum.
If we consider all prefix sums, we can notice that there is a subarray with 0 sum when either a prefix sum repeats or prefix sum becomes 0.
In both cases, we return true else we store the prefix sum in map or set and keep iterating.*/

bool subArrayExists(int arr[], int n)
    {
        int s=0;
        vector<int>v={};
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
            v.push_back(s);
        }set<int>s1(v.begin(),v.end());
         for(int i=0;i<n;i++)
         {
             if(v[i]==0||v.size()!=s1.size())
             return 1;
         }return 0;
    }

// Time Complexity: O(n).
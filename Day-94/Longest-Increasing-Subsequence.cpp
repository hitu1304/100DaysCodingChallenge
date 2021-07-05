//dp

int longestSubsequence(int n, int a[])
    {
       vector<int>v;
       v.push_back(a[0]);
       
       for(int i=1;i<n;i++)
       {
           if(v.back()<a[i])
           {
               v.push_back(a[i]);
           }else
           {
               int ind = lower_bound(v.begin(),v.end(),a[i])-v.begin();
               v[ind]=a[i];
           }
       }return v.size();
       
    }

/*Expected Time Complexity : O( N*log(N) )
Expected Auxiliary Space: O(N).*/
//Use hasmap

int maxLen(int A[], int n)
{
   unordered_map<int,int>m;
   int sum=0,ans=0;
   for(int i=0;i<n;i++)
   {
       sum+=A[i];
       
       if(sum==0)
       {
           if(ans<i+1)
           {
               ans=i+1;
           }
       }
       
       else if(m.find(sum)!=m.end())
       {
           if(ans<i-m[sum])
           {
               ans=i-m[sum];
           }
       }
       else
           {
               m[sum]=i;
           }
   }return ans;
}

/* Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).*/
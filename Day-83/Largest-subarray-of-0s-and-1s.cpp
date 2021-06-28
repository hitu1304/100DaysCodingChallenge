// use map

int maxLen(int arr[], int N)
    {
        // Your code here
        int ans=0;
        int sum=0;
        map<int, int>m;
        m[sum]=-1;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i]==0?-1:1;
           if(m.find(sum)!=m.end())
            {
                if(ans<i-m[sum])
                ans=i-m[sum];
            }else
            {
            m[sum]=i;
            }
            
        }return ans;
    }

/*Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).*/
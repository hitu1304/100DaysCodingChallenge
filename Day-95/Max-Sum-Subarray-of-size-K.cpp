// brute force

int maximumSumSubarray(int K, vector<int> &Arr , int N){
        int ans=INT_MIN;
        int s=0;
        for(int i=0;i<K;i++)s+=Arr[i];
        
        for(int i=0;i<=N-K;i++)
        {
            
            ans=max(ans,s);
            s=s-Arr[i];
            s=s+Arr[K+i];
            
        }return ans;
    }

/*Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1).*/
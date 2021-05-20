// use map or two pointer algo.

int sumExists(int arr[], int n, int sum){
    
    
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int k=sum-arr[i];
        
        if(m.find(k)!=m.end())
        return 1;
        m[arr[i]]++;
        
    }return 0;
    
    
}

//Time Complexity : O(n).
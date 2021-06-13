int maxDistance(int arr[], int n)
    {
    int i=0,m=*max_element(arr,arr+n),h1[m+1]={0},h2[m+1]={0};
    vector<int>v={};
    for(i=0;i<n;i++)
    {
        h1[arr[i]]=i;
    }
    reverse(arr,arr+n);
    for(i=0;i<n;i++)
    {
        h2[arr[i]]=i;
    }
    for(i=0;i<n;i++)
    {
        v.push_back(h1[arr[i]]-((n-1)-h2[arr[i]]));
    }
    return *max_element(v.begin(),v.end());
    }

/*Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)*/
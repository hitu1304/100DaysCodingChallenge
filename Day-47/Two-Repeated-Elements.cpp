/*Approach-> use hash.*/

pair<int,int> twoRepeated (int arr[], int N)
    {
        pair<int,int>p;
        vector<int>v={};
        int a,b;
        int m=*max_element(arr,arr+N+2);
        int h[m+1]={0};
        for(int i=0;i<N+2;i++)
        {
            h[arr[i]]++;
            if(h[arr[i]]==2)
            {
            v.push_back(arr[i]);
            }
        }p=make_pair(v[0],v[1]);
        return p;
    }

// Time Complexity: O(N).
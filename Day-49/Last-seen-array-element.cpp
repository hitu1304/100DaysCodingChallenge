/*Approach-> first reverse the array and now print the last distinct element.*/

int lastSeenElement(int arr[], int n)
    {
        reverse(arr,arr+n);
        vector<int>v={};
        int m=*max_element(arr,arr+n);
        int h[m+1]={0};
        for(int i=0;i<n;i++)
        {
            h[arr[i]]++;
            if(h[arr[i]]==1)
            v.push_back(arr[i]);
        }return v[v.size()-1];
    }

//Time Complexity: O(N).
/* Approach-> use hashtable to find the missing element.*/

pair<int, int> findRepeating(int *arr, int n){
        int m=*max_element(arr,arr+n);
        int h[m+1]={0};
        int i;
        for(i=0;i<n;i++)
        {
            h[arr[i]]++;
        }
        pair<int,int>v={max_element(h,h+m+1)-h,*max_element(h,h+m+1)};
        return v;
    }

//Time Complexity: O(N)
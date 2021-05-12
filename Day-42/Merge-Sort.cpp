//Approach ->Merge sort algorithm

 public:
    void merge(int arr[], int l, int m, int r)
    {
        int i = l;
    int j = m+1;
    int k = l;
    int B[r+1];
    while (i <= m && j <= r){
        if (arr[i] < arr[j]){
            B[k++] = arr[i++];
        } else {
            B[k++] = arr[j++];
        }
    }
    while (i <= m){
        B[k++] = arr[i++];
    }
    while (j <= r){
        B[k++] = arr[j++];
    }
    for (int i=l; i<=r; i++){
        arr[i] = B[i];
    }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
       if(l<r)
       {
          int  m=(l+r)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
       }
    }

// Time Complexity: O(nlogn) .
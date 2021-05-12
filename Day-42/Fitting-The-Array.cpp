/*Approach-> sort both the thats the only solution*/

bool isFit(int a[], int b[], int n){
    
    sort(a,a+n);
    sort(b,b+n);
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        return 0;
    }return 1;
}

//Time Complexity : O(NlogN).
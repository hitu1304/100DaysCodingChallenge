/*Approach-> Traverse all the elements from right to left in array and check whether the current element is greater than the maximum stored till now.*/

vector<int> leaders(int a[], int n){
        int max=a[n-1],i;
         vector<int>v={};
        v.push_back(max);
       
    for( i=n-2;i>=0;i--){
    if(a[i]>=max){
   max=a[i];
   v.push_back(max);}}
    sort(v.begin(),v.end(),greater<>());
        return v;
    }

//Time Complexity: O(n).
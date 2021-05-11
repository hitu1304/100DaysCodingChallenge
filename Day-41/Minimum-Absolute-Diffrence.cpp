//this question is from my course track can't paste the problem statement.

int getMinDiff(int a[], int n)
{
    // Your code goes here
    sort(a,a+n,greater<>());
    int i;
    vector<int>v={};
    for(i=0;i<n-1;i++)
    {
        v.push_back(abs(a[i]-a[i+1]));
        
    }return *min_element(v.begin(),v.end());
    
}
//Time Complexity: O(N).
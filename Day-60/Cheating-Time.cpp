// use pair algo


#include <bits/stdc++.h>
using namespace std;

int main() {


int t;
cin>>t;
while(t--)
{
    
    int n,k,f,s,p;
    vector<pair<int ,int>>v;
    int i,ans=0;
    cin>>n>>k>>f;
    for(i=0;i<n;i++)
    {
        cin>>s>>p;
        v.push_back({s,p});
    }
    sort(v.begin(),v.end());
    
    int max_end=v[0].second;
    int x=0;
    for(int i=1;i<n;i++)
    {
        ans+=max(x,v[i].first-max_end);
        max_end=max(max_end,v[i].second);
    }
    ans+=v[0].first;
    ans+=f-max_end;
    
    if(ans>=k)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
    
}
	return 0;
}
// Time Complexity: O(N).
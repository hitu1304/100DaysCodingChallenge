#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    vector<ll>v(n);
	    vector<ll>v1;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>v[i];
	        
	    }
	    sort(v.begin(),v.end(),greater<>());
	     for(ll i=0;i<(2*k+1);i++)v1.push_back(v[i]);
	    
	    ll last=v1[v1.size()-1];
	    v1.pop_back();
	    v1[v1.size()-1]+=last;
	    
	    ll s1=0,s2=0;
	    for(int i=0;i<v1.size();i++)
	    {
	        if(i%2==0)
	        s1+=v1[i]; 
	        else
	        s2+=v1[i];
	    }
	    cout<<max(s1,s2)<<endl;
	    
	    
	    
	    
	}
	return 0;
}
// Time Complexity: O(N).
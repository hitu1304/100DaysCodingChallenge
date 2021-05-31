#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	
	
	while(t--)
	{
	    ll a,b,c,d,k;
	    cin>>a>>b>>c>>d>>k;
	    ll t=(abs(a-c)+abs(b-d));
	    if((k-t)>=0)
	    {
	    if(t==k || (k-t)%2==0 )
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	    
	    
	    
	}
	return 0;
}
// Time Complexity: O(N).
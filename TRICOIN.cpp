#include<iostream>
#include<math.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll l=0;
		ll r=sqrt(2*pow(10,9));
		int ans;
		while(l<r){
			ll mid=(l+r)/2;
			ll coins=(mid*(mid+1))/2;
			 
			 if(coins<=n){
					
				l=mid+1;
				ans=l;
			
			}
			
			else if(coins>n){
				
				r=mid-1;
			}
		}
		ll coins=(l*(l+1))/2;
		if(n<coins)
		cout<<ans-1<<endl;
		else
		cout<<ans<<endl;
	}
}

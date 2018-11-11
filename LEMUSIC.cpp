#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll B[n+1];
		ll L[n];
		for(ll i=0;i<n;i++){
			cin>>B[i];
			cin>>L[i];
		}
		sort(B,B+n);
		sort(L,L+n);
		ll  count=1;
		ll ans=0;
		ll k=0;
		B[n]=-1;
		for(ll i=0;i<n;i++){
			if(B[i]!=B[i+1]){
				cout<<L[k]<<" "<<count<<" ";
				ans=ans+(count*L[k]);
				count++;
				k++;
			}
		}
//		count=count+1;
		ll j=k;
		
		for(ll i=j;i<n;i++){
			ans=ans+(count*L[k]);
			k++;
		}
		cout<<endl;
		cout<<ans<<endl;
	}
	
	
}

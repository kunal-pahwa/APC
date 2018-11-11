#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll h;
		cin>>h;
		ll A[n];
		for(ll i=0;i<n;i++){
			cin>>A[i];
		}
//		sort(A,A+n);
		ll l=1;
		ll r=pow(10,9);
		ll ans=0;
		while(l<r){
			ll mid=(l+r)/2;
			 ans=0;
			for(ll i=0;i<n;i++){
//				cout<<"reached"<<mid<<" ";
				double a=A[i]/(double)mid;
				ans=ans+ceil(a);
//				cout<<ans<<endl;
			}
			if(ans<=h){
				r=mid;
			}
			else{
				l=mid+1;
			}
		}
//		cout<<"end";
		
		cout<<l<<endl;
	}
}

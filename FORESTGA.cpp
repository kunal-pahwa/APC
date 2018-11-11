#include<iostream>
#define ll long long int 
#include<math.h>
using namespace std;
int main(){

	ll n,w,l;
	cin>>n>>w>>l;
	ll T[n];
	ll R[n];
	
	
	for(ll i=0;i<n;i++){
		cin>>T[i];
		cin>>R[i];
	}
	
	ll left=0;
	int flag=0;
	ll r=pow(10,18);
	ll woodreq=0;
	while(left<r){
		ll mid=(left+r)/2;
		woodreq=0;
		for(ll i=0;i<n;i++){
			ll a=T[i]+(R[i]*mid);
//			cout<<mid<<" ";
			if(a>=l){
//				cout<<"int if";
				woodreq=woodreq+a;
//				cout<<woodreq<<endl;
			}
		}
		
		if(woodreq<w){
			left=mid+1;
		}
		else{
			r=mid;
		}
	}
//	cout<<"left"<<left<<endl;
	ll second=0;
	for(ll i=0;i<n;i++){
		ll a=T[i]+(R[i]*(left-1));
//			cout<<a<<" "<<mid;
			if(a>=l){
				
				second=second+a;
//				cout<<woodreq<<endl;
			}
	}
//	cout<<"second"<<second<<" ";
	if(second>=w){
		cout<<left-1;
	}
	else
		cout<<left;
}

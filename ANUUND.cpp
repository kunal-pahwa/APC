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
		ll A[n];
		for(ll i=0;i<n;i++){
			cin>>A[i];
		}
		sort(A,A+n);
		for(ll i=1;i<n-1;i=i+2){
			ll temp=A[i];
			A[i]=A[i+1];
			A[i+1]=temp;
		}
		for(ll i=0;i<n;i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
	}
}

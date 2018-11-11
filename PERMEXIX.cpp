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
		int A[n];
		for(ll i=0;i<n;i++){
			cin>>A[i];
		}
		sort(A,A+n);
		bool flag=0;
		for(ll i=0;i<n-1;i++){
			if(A[i+1]-A[i]<=1){
				continue;
			}
			else{
				flag=1;
				break;
			}
		}
		if(flag){
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
		}
	}
}

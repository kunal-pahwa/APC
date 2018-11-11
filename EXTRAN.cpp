#include<iostream>
#define ll long long int
#include<algorithm>
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
		if(A[1]-A[0]!=1){
			if(A[2]-A[1]!=1){
				cout<<A[1]<<endl;
			}
			else{
				cout<<A[0]<<endl;
			}
		}
		else if(A[n-1]-A[n-2]!=1){
			if(A[n-2]-A[n-3]!=1){
				cout<<A[n-2]<<endl;
			}
			else{
				cout<<A[n-1]<<endl;
			}
		}
		else{
			for(ll i=1;i<n-1;i++){
				if(A[i+1]-A[i]!=1){
					if(A[i-1]-A[i]!=1){
						cout<<A[i]<<endl;
						break;
					}
					else{
						cout<<A[i+1]<<endl;
						break;
					}
				}
			}
		}
	}
}

#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		sort(A,A+n);
		ll  mindiff=1000000000;
		for(int i=0;i<n-1;i++){
			ll  ans=A[i+1]-A[i];
			mindiff=min(mindiff,ans);
		}
		cout<<mindiff<<endl;
	}
}

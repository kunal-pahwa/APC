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
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		sort(A,A+n);
		int count=0;
		for(int i=0;i<n-1;i++){
			if(A[i]==A[i+1]){
				count++;
				
			}
		}
		cout<<count<<endl;
	}
}

#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int
int main(){
	ll n;
	cin>>n;
	ll d;
	cin>>d;
	ll A[n];
	for(ll i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n);
	ll count=0;
	for(ll i=0;i<n-1;i++){
		if(A[i+1]-A[i]<=d){
//			cout<<i<<" ";
			count++;
			i++;
		}
//		cout<<"a";
		
	}
	cout<<count<<endl;
	
}

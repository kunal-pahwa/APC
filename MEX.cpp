#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll A[n];
		for(ll i=0;i<n;i++){
			cin>>A[i];
		}
		ll count=0;
		sort(A,A+n);
		ll i=0;
		while(k>=0){
			while(A[i]==A[i+1]){
				i++;
				
			}
			while(i<n){
				if(A[i]==count){
					i++;
					count++;
				}
				else if(k>0){
					k--;
					count++;
				}
				else{
					break;
				}
			}
			count++;
			k--;
		}
	
//		cout<<count<<endl;
	
		
		cout<<count<<endl;
	}
}

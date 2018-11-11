#include<iostream>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll A[n];
		int flag=0;
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		if(n%2==0){
//			cout<<"no"<<endl;
			flag=1;
		}
		else{
			int j=n-1;
			
			for(int i=0;i<=n/2;i++){
				if(A[i]==i+1 && A[n-1-i]==i+1){
					
				}
				else{
					flag=1;
					break;
				}
			}
		}
		if(flag){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
}

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
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		ll dp[n];
		dp[n-1]=1;
		for(int i=n-2;i>=0;i--){
			if(A[i]*A[i+1]<0){
				dp[i]=dp[i+1]+1;
			}
			else{
				dp[i]=1;
			}
		}
		for(int i=0;i<n;i++){
			cout<<dp[i]<<" ";
		}
		cout<<endl;
	}
}

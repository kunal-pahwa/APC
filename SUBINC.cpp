#include<iostream>
using namespace std;
#define ll long long int 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll A[n];
		ll dp[n];
		dp[n-1]=1;
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		ll ans=1;
		for(int i=n-2;i>=0;i--){
			if(A[i]<=A[i+1]){
				dp[i]=dp[i+1]+1;
			}
			else{
				dp[i]=1;
			}
			ans=ans+dp[i];
		}
		cout<<ans<<endl;
	}
	
}

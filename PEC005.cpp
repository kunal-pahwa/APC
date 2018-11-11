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
		ll dp[n];// subsequence till;
		for(int i=0;i<n;i++){
			cin>>A[i];
			dp[i]=1;
		}
		ll prevmax=0;
		for(int i=1;i<n;i++){
			for(int j=i-1;j>=0;j--){
				if(A[j]<=A[i]){
					
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
			
		}
		
		ll ans=0;
		for(int i=0;i<n;i++){
			ans=max(dp[i],ans);
//			cout<<dp[i]<<" ";
		}
		cout<<ans<<endl;
	}
}

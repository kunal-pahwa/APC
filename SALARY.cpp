#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int Arr[n];
		
		for(int i=0;i<n;i++){
			cin>>Arr[i];
		}
		sort(Arr,Arr+n);
		ll ans=0;
		for(int i=1;i<n;i++){
			ans=ans+abs(Arr[0]-Arr[i]);
		}
		cout<<ans<<endl;
	}
}

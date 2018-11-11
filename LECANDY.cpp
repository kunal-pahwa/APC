#include<iostream>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll sum=0;
		ll c;
		cin>>c;
		while(n--){
			ll a;
			cin>>a;
			sum+=a;
		}
		if(c>=sum){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}

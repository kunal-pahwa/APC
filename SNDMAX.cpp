#include<iostream>
#define ll long long int
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c;
		cin>>a>>b>>c;
		if(a>b && b>c){
			cout<<b<<endl;
		}
		else if(a<b && c>b){
			cout<<b<<endl;
		}
		else if(b>a && a>c){
			cout<<a<<endl;
		}
		else if(c>a && a>b){
			cout<<a<<endl;
		}
		else if(a>c && c>b){
			cout<<c<<endl;
		}
		else if(b>c && c>a){
			cout<<c<<endl;
		}
	}
}

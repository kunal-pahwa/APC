#include<iostream>
#define ll long long int
using namespace std;
int main(){
	string s;
	cin>>s;
	int arr[123]={0};
	int l=s.length();
	for(int i=0;i<l;i++){
		int d=s[i];
		arr[d]=1;
	}
	ll n;
	cin>>n;
	while(n--){
		string a;
		cin>>a;
		int al=a.length();
		int flag=0;
		for(int i=0;i<al;i++){
			int d=a[i];
			if(arr[d]==1){
				continue;
			}
			else{
				flag=1;
				break;
			}
		}
		if(flag){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}
}

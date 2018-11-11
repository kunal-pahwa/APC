#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int count=0;
		int n;
		cin>>n;
		long long int k;
		cin>>k;
		while(n--){
			long long int a;
			cin>>a;
			if((a+k)%7==0){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

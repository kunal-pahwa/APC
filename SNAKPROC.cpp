#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		string s;
		cin>>s;
		int incr=0;
		int flag=0;
		for(int i=0;i<n;i++){
			
			if(incr>1 || incr<-1){
				flag=1;
				break;
			}
			else if(incr==0 && s[i]=='T'){
				flag=1;
				break;
			}
			else if(s[i]=='H'){
				incr++;
//				cout<<incr;
//				cout<<"IN H";
			}
			else if(s[i]=='T'){
				incr--;
//				cout<<incr;
//				cout<<"IN T";
			}
		}
//		cout<<incr;
		if(incr==0){
			if(flag){
				cout<<"Invalid"<<endl;
			}
			else{
				cout<<"Valid"<<endl;
			}
		}
		else{
			cout<<"Invalid"<<endl;
		}
	}
}

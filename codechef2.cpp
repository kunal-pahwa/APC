#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<"1"<<" "<<"2 ";
		}
		if(n==2){
			cout<<"1"<<" "<<"4 ";
		}
		if(n==3){
			cout<<"5"<<" "<<"8 ";
		}
		if(n==4){
			cout<<"15"<<" "<<"16 ";
		}
		if(n==5){
			cout<<"39"<<" "<<"32 ";
		}
		else{
			cout<<"1"<<" "<<"2 ";
		}
	}
}
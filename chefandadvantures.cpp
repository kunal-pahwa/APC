#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,m,x,y,a,b;
		cin>>n>>m>>x>>y;
		a=(n)%x;
		b=(m)%y;
		if((a==1 || a==0) && b==0){
			cout<<"Chefirnemo";
		}
		else if((b==1 || b==0) && a==0){
			cout<<"Chefirnemo";
		}
		else if(n<x || m<y){
//			cout<<"in1";
			cout<<"Profik";
		}
		else if(a==1 && b==1){
//			cout<<"in2";
			cout<<"Chefirnemo";
		}
		else if(a==2&& b==2){
//			cout<<"in3";
			cout<<"Chefirnemo";
		}
		else{
//			cout<<"in4";
			cout<<"Profik";
		}
		cout<<endl;
	}
}

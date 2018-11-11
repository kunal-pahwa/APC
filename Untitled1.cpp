#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int c,d,l;
		cin>>c>>d>>l;
		if(l%4!=0){
			cout<<"no";
		}
		else{
			if(l<4*d){
				cout<<"no";
			}
			else{
				if(l>4*(c+d)){
					cout<<"no";
				}
				else if(c>d/2)){
					if(l<4*(c-d)){
						cout<<"no";
					}
					else{
						cout<<"yes";
					}
				}
				else{
					cout<<"yes";
				}
				
			}
		}
		cout<<endl;
	}
}

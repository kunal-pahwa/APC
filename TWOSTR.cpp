#include<iostream>
#include<string>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	while(n--){
		string a,b;
		cin>>a>>b;
		int n=a.length();
		int j=0;
		int flag=0;
		for(int i=0;i<n;i++){
			if(a[i]==b[j]){
				j++;
			}
			else if(a[i]=='?' || b[j]=='?'){
				j++;
			}
			else if(a[i]!=b[j]){
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

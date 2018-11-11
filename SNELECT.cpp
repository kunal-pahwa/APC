#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		int count=0;
		for(int i=0;i<n-1;i++){
			if(s[i]!=s[i+1]){
				count++;
				i=i+1;
			}
		}
		int snakes=0;
		int mongo=0;
		for(int i=0;i<n;i++){
			if(s[i]=='s'){
				snakes++;
			}
			else if(s[i]=='m'){
				mongo++;
			}
		}
		snakes=snakes-count;
		if(snakes>mongo){
			cout<<"snakes"<<endl;
		}
		else if(mongo>snakes){
			cout<<"mongooses"<<endl;
		}
		else{
			cout<<"tie"<<endl;
		}
	}
}

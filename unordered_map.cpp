#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	unordered_map<int,int>m;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>b;
		m[a]=b;	
	}
	unordered_map<int,int> :: iterator it;
	for(it=m.begin(),it!=m.end();it++){
		cout<<it->second <<" ";
	}
}

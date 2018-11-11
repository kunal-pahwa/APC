#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int j=0;
	int i=1;
	int n=s.length();
	int ans[n];
	ans[0]=0;
	
	for(int i=1;i<n;i++){
		if(s[i]==s[j]){
			ans[i]=j+1;
			i++;
			j++;
		}
		else{
			if(ans[ans[i]]==s[i]){
				j=ans[ans[i]];
				ans[i]=j+1;
				j++;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
}

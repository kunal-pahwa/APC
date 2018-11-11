#include<iostream>
using namespace std;
int main(){
	string s;
	string search;
	cin>>search;
	int n=search.length();
	cin>>s;
	int j=0;
	int i=1;
	int m=s.length();
	int ans[m];
	ans[0]=0;
	//lps
	while(i<m){
		if(s[i]==s[j]){
			
			j++;
			ans[i]=j;
			i++;
		}
		else{
			if(j!=0){
				j=ans[j-1];
			}
			else{
				ans[i]=0;
				i++;
			}
		}
	}
	// now the main part
	j=0;
	i=0;
	while(i<n && j<m){
		if(search[i]==s[j]){
			i++;
			j++;
			
		}
		
		else {
			if(j!=0){
				j=ans[j-1];
			}
			else{
				i++;
			}
		}
	}
	if(j==m){
			cout<<"pattern found at index"<<i-j;
		}
		else{
			cout<<"sf";
		}
	
	for(int i=0;i<m;i++){
		cout<<ans[i]<<" ";
	}
}

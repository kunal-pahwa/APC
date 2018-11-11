#include<iostream>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
	
			int flag=0;
			int k=1;
			int i=0;
			int j=n-1;
			while(i<j){
				if((A[i]!=A[j] || A[i]!=k)){
					flag=1;
					break;
					
				}
				if(A[i]!=A[i+1]){
						k++;
				}
				i++;
				j--;
				
			}
//			cout<<k<<" "<<endl;
			if(flag==1){
				cout<<"no"<<endl;
			}
			else{
				if(A[i]==7 && k==7){
					cout<<"yes"<<endl;
				}
				else{
					cout<<"no"<<endl;
				}
			}
		
		
	}
	return 0;
}

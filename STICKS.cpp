#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int
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
		sort(A,A+n);
		ll count=1;
		ll area=0;
		ll ans[3]={0};
		int k=0;
		for(int i=n-1;i>0;i--){
			
			if(A[i]==A[i-1]){
//				cout<<A[i]<<" "<<count<<endl;
				count++;
				
			}
			else{
//				cout<<"else"<<A[i]<<endl;
				count=1;
			}
			if(count%2==0){
			
				ans[k]=A[i];
//					cout<<"check "<<A[i]<<endl;
				k++;
				if(k==2){
					break;
				}
			}
		}
		area=ans[0]*ans[1];
		if(area==0){
			cout<<"-1"<<endl;
		}
		else
		cout<<area<<endl;
	}	
}

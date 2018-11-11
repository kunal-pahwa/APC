#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll M[n]={0};
		for(int i=0;i<m;i++){
			int a;
			cin>>a;
			M[a]++;
		}
//		for(int i=0;i<n;i++){
//			cout<<M[i]<<" ";
//		}
//		cout<<endl;
		ll ans=0;
		int k=0;
		while(n--){
			int C;
			cin>>C;
			int A[C];
			for(int i=0;i<C;i++){
				cin>>A[i];
			}
			sort(A,A+C);
			int j=C-1;
			int freq=M[k];
			k++;
//			cout<<"ans: ";
			while(freq>0 && j>=0){
//				cout<<A[j]<<" ";
				ans=ans+A[j];
				j--;
				freq--;
			}
//			cout<<endl;
		}
		cout<<ans<<endl;
	}
}

#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
	ll n;
	ll m;
	cin>>n>>m;
	ll A[n+1];
	int freq[10001]={0};
	for(ll i=1;i<=n;i++){
		cin>>A[i];
		freq[A[i]]++;
	}
//	for(int i=1;i<=m;i++){
//		cout<<freq[i]<<" ";
//	}
	
	pair< int,pair<int,string> > ans[m+1];
	for(ll i=1;i<=m;i++){
		ll sp,p;
		string inp;
		cin>>sp>>p>>inp;
		if(freq[sp]!=0){
			ans[i].first=1;
			ans[i].second.first=p;
			ans[i].second.second=inp;
		}
		else{
			ans[i].first=0;
			ans[i].second.first=p;
			ans[i].second.second=inp;
		}
	}
	sort(ans+1,ans+m+1);
	for(ll i=m;i>0;i--){
		cout<<ans[i].second.second<<endl;
	}
	
}

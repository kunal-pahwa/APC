#include<iostream>
#include<algorithm>
#include<math.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll k;
		cin>>k;
		ll A[n];
		int gsum=0;
		for(int i=0;i<n;i++){
			cin>>A[i];
			gsum=gsum+A[i];
		}
		sort(A,A+n);
		if(k>n-k){
			ll sum1=0;
			ll sum2=0;
			for(int i=0;i<n-k;i++){
				sum1=sum1+A[i];
			}
			sum2=abs(gsum-sum1);
			cout<<abs(sum2-sum1)<<endl;
		}
		else{
			ll sum1=0;
			ll sum2=0;
			for(int i=0;i<k;i++){
				sum1=sum1+A[i];
			}
			sum2=(gsum-sum1);
			cout<<abs(sum2-sum1)<<endl;
		}
	}
	return 0;
}

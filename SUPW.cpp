#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int dp[n];
	dp[0]=0;
	dp[1]=0;
	dp[2]=min(A[0],min(A[1],A[2]));
	for(int i=3;i<n;i++){
		dp[i]=min(A[i]+dp[i-1],min(A[i-1]+dp[i-2],dp[i-3]+A[i-2]));
	}
	cout<<dp[n-1];
}

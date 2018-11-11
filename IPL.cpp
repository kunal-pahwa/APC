#include<iostream>
#include<math.h>
using namespace std;
#define max(A,B,C) ((A>B)?((B>C)?A:(A>C)?A:C):(B>C)?B:C)
int main(){
//	cout<<max(5,2,3);
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int dp[n];
	dp[0]=A[0];
	dp[1]=A[0]+A[1];
	dp[2]=max(A[0]+A[1],A[1]+A[2],A[0]+A[2]);
//	cout<<dp[2]<<endl;
	for(int i=3;i<n;i++){
		dp[i]=max(dp[i-1],dp[i-3]+A[i]+A[i-1],A[i]+dp[i-2]);
	}
	cout<<dp[n-1];
}

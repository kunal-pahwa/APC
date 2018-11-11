#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int DP[n]={0};
	
	DP[1]=0;
	DP[2]=0.0;
	DP[3]=min(A[0],A[1],A[2]);
	
}

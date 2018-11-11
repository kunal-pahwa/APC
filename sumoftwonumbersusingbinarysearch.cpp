#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int k=0;
	cin>>k;
	int count=0;
	int j=0;
	int preva=0;
	int prevb=0;
	int sum=0;
	int find=0;
	for(int i=0;i<n-1;i++){
		find=k-A[i];
//		preva=A[i];
		int j=i+1;
		int left=j;
		int right=n-1;
		int mid=0;
		while(left<right){
			mid=(left+right)/2;
			if(A[mid]==find){
				if((preva!= A[i] || prevb!=find) && find>0){
					count++; 
					preva=A[i];
					prevb=find;
				}
				else if(A[mid]<find){
					left=mid+1;
				}
				else{
					right=mid-1;
				}
			}
		}
		
	}
	cout<<count;
}

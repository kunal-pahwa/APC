#include<iostream>
using namespace std;
int binarysearch(int arr[],int left,int right,int x){
	int mid=(left+right)/2;
	if(arr[mid]==x){
		return mid;
	}
	else{
		if(x<arr[mid]){
			cout<<arr[mid]<<endl;
			binarysearch(arr,0,mid-1,x);
		}
		else if(x>arr[mid]){
			cout<<arr[mid]<<endl;
			binarysearch(arr,mid+1,right,x);
		}
		
	}
}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int x=7;
	int ans=binarysearch(arr,0,10,x);
	cout<<ans;
}

#include<iostream>
using namespace std;
void mergesort(int arr[],int start,int end){
	if(end-start==1 || end-start==0){
		return ;
	}
	else{
		int mid=(start+end)/2;
		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
		merge(arr[],start,end);
	}
}
void merge(int arr[],int start,int end){
	int left=(start+end)/2;
	int l[left];
	for(int i=0;i<left;i++){
		l[i]=arr[i];
	}
	int right=end-left+1;
	int r[right];
	int k=0;
	for(int i=left;i<end;i++){
		r[k]=arr[i];
		k++;
	}
	k=0;
	while(i<left && j<right){
		if(l[i]<r[j]){
			arr[k]=l[i];
			i++;
			k++;
		}
		else{
			arr[k]=r[j];
			j++;
			k++;
			
		}
	}
	while(i<left){
		arr[k]=l[i];
		i++;
		k++;
	}
	while(j<right){
		arr[k]=r[j];
		j++;
		k++;
	}
	
}
int main(){
	int n;
	cin>>n;
	int Arr[n];
	for(int i=0;i<n;i++){
		cin>>Arr[i];
	}
	mergesort(Arr,0,n);
	for(int i=0;i<n;i++){
		cout<<Arr[i]<<" ";
	}
}

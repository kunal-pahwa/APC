#include <bits/stdc++.h>

using namespace std;
int getMedian(int temp[],int k){
    k=k+1;
    int sum=0;
    int i;
    for(i=0;i<=200;i++) {
        sum=sum+temp[i];
        if(sum >= k) {
           break;
        }
    }
    return i;
}
int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int> expenditure;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        expenditure.push_back(a);
    }
    
    // sort(arr.begin(),arr.end());
    // sort(expenditure.begin(), expenditure.end());
    // for(int i=0;i<n;i++) {

    // }
    float median = 0;
    int arr[201] ={0};
    for(int i=0;i<d;i++){
        arr[expenditure[i]]++;;
    }
    if(d%2 == 0){
        int x = getMedian(arr,((d-1)/2));
        int y = getMedian(arr,((d+1)/2));
        median=(x+y)/2.0;
    }
    else{
        int x=getMedian(arr,d/2);
        median = x;
    }
    // int x = 1;
    int count = 0;
    
    for (int i = d; i <= n; i++) {
        // cout << median << " ";
      if (expenditure[i] >= 2*median ) {
        count++;
      }
      arr[expenditure[i-d]]--;
      arr[expenditure[i]]++;
      if (d % 2 == 0) {
        int x = getMedian(arr, ((d - 1) / 2));
        int y = getMedian(arr, ((d + 1) / 2));
        median = (x + y) / 2.0;
      } else {
        int x = getMedian(arr, d / 2);
        median = x;
      }
    }
    cout<<count;
}


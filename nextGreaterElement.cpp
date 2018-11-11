#include<iostream>
#include<unordered_map>
#include<stack>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    unordered_map<int,int> mp;
	    stack<int> stk;
	    for(int i=0;i<n;i++){
	        if(stk.empty()){
	            stk.push(A[i]);
	            continue;
	        }
	        while(stk.empty()==0 && stk.top()<A[i]){
	            mp[stk.top()]=A[i];
	            stk.pop();
	           
	        }
	         stk.push(A[i]);
	    }
	    while(stk.empty()==0){
	        mp[stk.top()]=-1;
	        stk.pop();
	    }
	    for(int i=0;i<n;i++){
	        cout<<mp[A[i]]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

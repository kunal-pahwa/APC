#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int count=0;
		while(n--){
			char c;
			cin>>c;
			
			if(c=='1'){
				count++;
			}
		}
		long long int ans=(count*(count+1))/2;
		cout<<ans<<endl;
	}
	return 0;
}

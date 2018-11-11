#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		bool flag=0;
		string a,b;
		cin>>a>>b;
//		cout<<INT_MAX;
		long long int n=a.length();
		long long int dp1[n+1];
		long long int dp2[n+1];
	
		if(a[0]=='#' && b[0]=='#'){
			cout<<"No"<<endl;
			continue;
		}	
		else{
			if(a[0]=='#'){
				dp1[0]=1000006;
			}
			else{
				dp1[0]=0;
			}
			if(b[0]=='#')
				dp2[0]=1000006;
			else
				dp2[0]=0;	
			int ans=1;
			for(int i=1;i<n;i++){
				if(a[i]=='#' && b[i]=='#'){
					cout<<"No"<<endl;
					ans=0;
					break;
				}
				else{
					if(a[i]=='#')
						dp1[i]=1000006;
					else
						dp1[i]=min(dp2[i-1]+1,dp1[i-1]);
						
					if(b[i]=='#')
						dp2[i]=1000006;
					else
						dp2[i]=min(dp1[i-1]+1,dp2[i-1]);
					
				}
//				cout<<dp1[i]<<" "<<dp2[i]<<" "<<endl;
			}
			if(ans){
				cout<<"Yes"<<endl;
				cout<<min(dp1[n-1],dp2[n-1])<<endl;	
			}
			
		}			
		
	}
		
	
}

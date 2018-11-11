#include<iostream>
#include<stack>
#include<map>
using namespace std;
int main(){
//	map<char,int> m;
//	m['*']=2;
//	m['/']=3;
//	m['+']=1;
//	m['(']=-1;
	string s;
	cin>>s;
	string postfix="";
	stack<char>stk;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='('){
			stk.push('(');
		}
		else if(s[i]==')'){
			while(stk.top()!='('){
				char ans=stk.top();
				postfix+=ans;
				stk.pop();
			}
			stk.pop();
		}
		else if(s[i]=='+'){
			while(stk.top()=='+' || stk.top()=='-' || stk.top() == '/' || stk.top()=='*'){
				char ans=stk.top();
				postfix+=ans;
				stk.pop();
			}
			
				stk.push('+');
			
		}
		else if(s[i]=='-'){
			while(stk.top()=='+' || stk.top()=='-' || stk.top() == '/' || stk.top()=='*'){
				char ans=stk.top();
				postfix+=ans;
				stk.pop();
			}
			
				stk.push('-');
			
		}
		else if(s[i]=='*'){
			while(stk.top()=='*' || stk.top()=='/'){
				char ans=stk.top();
				postfix+=ans;
				stk.pop();
			}
			stk.push('*');
			
		}
		else if(s[i]=='/'){
			while(stk.top()=='*' || stk.top()=='/'){
				char ans=stk.top();
				postfix+=ans;
				stk.pop();
			}
			stk.push('/');
			
		}
		else{
			postfix=postfix+s[i];
		}
	}	
	cout<<postfix;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		stack<char> s;
		string ans="";
		for(int i=0;i<str.length();i++){
			if(str[i]>='a' && str[i]<='z')
				ans+=str[i];
			else if(str[i]=='*' || str[i]=='/' || str[i]=='+' || str[i]=='-' || str[i]=='^')
				s.push(str[i]);
			else if(str[i]==')'){
				char ch=s.top();
				s.pop();
				ans+=ch;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

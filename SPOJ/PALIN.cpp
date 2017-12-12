#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int n=str.length();
		int cnt=0;
		for(int i=0;i<n;i++){
			if(str[i]=='9')
				cnt++;
		}
		if(cnt==n){
			str[0]='1';
			for(int i=1;i<n;i++)
				str[i]='0';
			str.push_back('1');
		}
		else{
			int i=n/2;
			int j=i;
			if(n%2==0)
				i--;
			while(i>=0 && str[i]==str[j]){
				i--;
				j++;
			}
			if(i<0 || str[i]<str[j]){
				i=n/2;
				j=i;
				if(n%2==0)
					i--;
				int c=1;
				while(i>=0){
					int num=str[i]-'0'+c;
					c=num/10;
					str[i]=(num%10)+'0';
					str[j]=str[i];
					i--;
					j++;
				}
			}
			else{
				while(i>=0){
					str[j]=str[i];
					i--;
					j++;
				}
			}
		}
		cout<<str<<endl;
	}
	return 0;
}

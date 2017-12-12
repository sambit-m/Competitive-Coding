#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
		int x;
		int y;
		cin>>x;
		cin>>y;
		if(y<0 && y==1)
		    return 0;
		  
		if(x==1)
		    x++;
		int n=floor(sqrt(y))+1;
		vector<int> res;
		vector<int> pr(n,1);
		for(int i=2;i*i<n;i++){
			for(int j=i*2;j<n;j=j+i){
					pr[j]=0;
			}
		}
		for(int i=2;i<pr.size();i++){
			if(pr[i]==1){
				res.push_back(i);
				if(i>=x)
				    cout<<i<<endl;
			}
		}
		if(x==1)
		    x++;
		vector<int> prime(y-x+1,1);
		for(int i=0;i<res.size();i++){
			int l=floor(x/res[i])*res[i];
			if(l<x)
				l+=res[i];
			for(int j=l;j<=y;j+=res[i])
				prime[j-x]=0;
		}
		for(int i=x;i<=y;i++){
			if(prime[i-x]==1)
				cout<<i<<endl;
		}
		cout<<endl;
	}
	return 0;
} 

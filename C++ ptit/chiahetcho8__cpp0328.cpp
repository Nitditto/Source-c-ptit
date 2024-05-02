#include<bits/stdc++.h>
using namespace std;

int cnt(string s, int n){
	int res=0;
	for(int i=0;i<s.length();i++){
		int sum=0;
		for(int j=i;j<s.length();j++){
			sum=sum*10+s[j]-'0';
			sum%=n;
			if(sum==0) ++res;
		}
	}
	return res;
}
void check(){
	string s; 
	cin>>s;
	cout<<cnt(s,8)-cnt(s,24);
}
int main(){
	int t; cin>>t;
	while(t--){
		check();
		cout<<endl;
	}
}

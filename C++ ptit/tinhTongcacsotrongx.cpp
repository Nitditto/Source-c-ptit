#include<bits/stdc++.h>

using namespace std;
void solve(string s){
	int res=0;
	s+="a";
	int val=0;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			val=val*10+s[i]-'0';
		}
		else{
			res+=val;
			val=0;
		}
	}
	cout<<res<<endl;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		solve(s);
	}
}

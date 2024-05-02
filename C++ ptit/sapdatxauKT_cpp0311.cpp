#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	int n=s.length();
	map<char,int>mp;
	for(int i=0;i<s.length();i++){
		mp[s[i]-'0']++;
	}
	int max_cnt=0;
	for(auto it:mp){
		max_cnt=max(max_cnt,it.second);
	}
	if(max_cnt<=(n+1)/2) return true;
	else return false;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<check(s)<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;

struct cmp{
	bool operator()(const string &a,const string &b){
		if(a.size()==b.size()){
			return a>b;
		}
		return a.size()>b.size();
	}
};
bool check(string s){
	if(s.size()<2) return false;
	int l=0, r=s.length()-1;
	while(l<=r){
		if(s[l]!=s[r]) return false;
		++l;
		--r;
	}
	return true;
}
int main(){
	string  s;
	map<string,int,cmp>mp;
	while(cin>>s){
		if(check(s))
		mp[s]++;
	}
	for(auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
	}
}

#include<bits/stdc++.h>

using namespace std;

bool sodep(string s){
	int l=0, r=s.length()-1;
	while(l<=r){
		if(s[l]!=s[r]) return false;
		++l;
		--r;
	}
	return true;
}
bool check(string s){
	for(int i=0;i<s.length();i++){
		if((s[i]-'0')%2!=0) return false;
	}
	return true;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		if(sodep(s)&&check(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

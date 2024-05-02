#include<bits/stdc++.h>

using namespace std;

bool check(string a){
	int l=0, r=a.length()-1;
	while(l<=r){
		if(a[l]!=a[r]) return false;
		++l;
		--r;
	}
	return true;
}
bool check2(string s){
	for(int i=0;i<s.length();i++){
		if((s[i]-'0') % 2 !=0)
			return false;
	}
	return true;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		if(check(s) && check2(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

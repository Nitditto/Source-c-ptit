#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int k; cin>>k;
		if(s.length()<26) cout<<"0"<<endl;
		set<char>se;
		map<char,int>mp;
		for(int i=0;i<s.length();i++){
			se.insert(s[i]);
			mp[soi]++;
		}
		if(26-se.size()<=k) cout<<"1";
		if(26-mp.size()<=k) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		map<char,int>mp;
		bool check=false;
		for(int i=0;i<s.length();i++){
			if(!isdigit(s[i]) || (i==0 && s[i]=='0')){
				cout<<"INVALID"<<endl;
				check=true;
				break;
			}
			mp[s[i]]++;
		}
		if(check) continue;
		bool ok=true;
		for(char i='0';i<='9';i++){
			if(mp[i]==0){
				ok=false;
				break;
			}
		}
		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

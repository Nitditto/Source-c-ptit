#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; 
		cin>>s;
		int tmp=0;
		for(int i=0;i<s.length();i++){
		tmp=(tmp*2+(s[i]-'0'))%5;
	}
		if(tmp%5==0) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}

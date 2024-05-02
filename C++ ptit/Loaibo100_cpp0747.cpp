#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int res=0;
		for(int i=0;i<s.length()-2;i++){
			if(s=="") break;
			if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
				res+=3;
				s.erase(i,3);
				i=-1;
			}
		}
		cout<<res<<endl;
	}
}

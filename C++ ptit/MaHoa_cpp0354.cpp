#include<bits/stdc++.h>

using namespace std;
		int cnt[26]={0};
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;

		for(int i=0;i<s.length();i++){
			cnt[s[i]]++;
		}
		for(int i=0;i<s.length();i++){
			if(cnt[s[i]]!=0){
				cout<<s[i]<<cnt[s[i]];
			}
			cnt[s[i]]=0;
		}
		cout<<endl;
	}
}

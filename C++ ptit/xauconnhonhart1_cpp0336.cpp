#include<bits/stdc++.h>

using namespace std;

void solve(){
	string s1,s2;
	cin>>s1>>s2;
	int dem1[256]={0}, dem2[256]={0};
	for(char x:s2){
		dem2[x]++;
	}
	int ans=INT_MAX, l=0, cnt=0, idx=-1;
	for(int i=0;i<s1.length();i++){
		dem1[s1[i]]++;
		if(dem1[s1[i]]<=dem2[s1[i]]) ++cnt;
		if(cnt==s2.length()){
			while(dem1[s1[l]] > dem2[s1[l]] || dem2[s1[l]]==0){
				if(dem1[s1[l]]>dem2[s1[l]]){
					dem1[s1[l]]--;
				}
				++l;
			}
			if(ans>i-l+1){
				ans=i-l+1;
				idx=l;
			}
		}
	}
	if(idx==-1) cout<<"-1"<<endl;
	else cout<<s1.substr(idx,ans)<<endl;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
	solve();
	}
}

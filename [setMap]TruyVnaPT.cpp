#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	map<char,int>mp;
	for(char c:s){
		mp[c]++;
	}
	char c1=mp.begin()->first, c2=c1;
	for(auto it:mp){
		if(it.second>mp[c1]) c1=it.first;
		if(it.second<=mp[c2]) c2=it.first;
	}
	cout<<c1<<" "<<mp[c1]<<endl;
	cout<<c2<<" "<<mp[c2]<<endl;
	cout<<mp.size();
}

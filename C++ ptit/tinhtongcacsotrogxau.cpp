#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		long long sum=0;
		for(int i=0;i<s.length();i++){
			if(isdigit(s[i])) sum+=(s[i]-'0');
		}
		cout<<sum<<endl;
	}
}

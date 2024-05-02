#include<bits/stdc++.h>
using namespace std;


void solve(string s){
	long long sum=0, val=0;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			val=val*10+s[i]-'0'; 
		}
		else {
			sum+=val;
			val=0;
		}
	}
	sum+=val;
	cout<<sum<<endl;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		solve(s);
		
	}
}

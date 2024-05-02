#include<bits/stdc++.h>

using namespace std;

bool cmp(string a,string b){
	return a<b;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		vector<string>v;
		int sum=0;
//		for(int i=0;i<s.length()-1;i++){
//			for(int j=i+1;j<s.length();j++){
//				if((s[i]-'0')>(s[j]-'0')){
//					swap(s[i],s[j]);
//				}
//			}
//		}
		int n=s.length();
		sort(s.begin(),s.end());
		for(int i=0;i<s.length();i++){
			if(!isdigit(s[i])){
				cout<<s[i];
			}
			else {
				sum+=s[i]-'0';
			}
		}
		cout<<sum<<endl;
	}
}

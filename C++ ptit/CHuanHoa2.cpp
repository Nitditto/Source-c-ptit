#include<bits/stdc++.h>
using namespace std;

void ChuanHoa(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin,s);
		stringstream ss(s);
		string token;
		vector<string>v;
		while(ss>>token){
			v.push_back(token);
		}
		ChuanHoa(v[v.size()-1]);
		cout<<v[v.size()-1]<<", ";
		for(int i=0;i<v.size()-1;i++){
			ChuanHoa(v[i]);
			cout<<v[i];
			if(i!=v.size()-2) cout<<" ";
		}
		cout<<endl;
	}
}

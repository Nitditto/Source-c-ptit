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
		int a;
		cin>>a;
		cin.ignore();
		string s; 
		getline(cin,s);
		stringstream ss(s);
		string token;
		vector<string>v;
		while(ss>>token){
			ChuanHoa(token);
			v.push_back(token);
		}
		//for(int i=0;i<v.size();i++)
		//ChuanHoa(v[i]);
		if(a==1){
			cout<<v[v.size()-1]<<" ";
			for(int i=0;i<v.size()-1;i++){
				cout<<v[i];
				if(i!=v.size()-2) cout<<" ";
			}
		}
		else {
			for(int i=1;i<v.size();i++){
				cout<<v[i];
				if(i!=v.size()-1) cout<<" ";
			}
			cout<<" "<<v[0];
;		}
		cout<<endl;
	}
}

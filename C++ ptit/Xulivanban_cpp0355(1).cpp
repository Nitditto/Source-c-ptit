#include<bits/stdc++.h>

using namespace std;

int main() {
	vector<string>v;
	string w;
	while(cin>>w){
		v.push_back(w);
	}
	int ok=1;
	for(string s:v) {
		for(int i=0; i<s.length(); i++){
			if(ok) {
				cout<<char(toupper(s[i]));
				ok=0;
			}
			else if(s[i]=='.'||s[i]=='?'||s[i]=='!')
			{	
			    ok=1;
				cout<<endl;
			}
			else cout<<char(tolower(s[i]));
		}
		if(!ok)
			cout<<' ';
	}
}

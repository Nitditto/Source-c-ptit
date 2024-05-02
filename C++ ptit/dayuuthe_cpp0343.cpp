#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		int cnt=0,	chan=0, le=0;
		string token;
		vector<string>v;
		while(ss>>token){
			++cnt;
			v.push_back(token);
		}
		for(long long i=0;i<v.size();i++){
			long long n=stoll(v[i]);
			if(n%2==0){
				++chan;
			}
			else ++le;
		}
		if((cnt%2==0 && chan>le) || (cnt%2!=0 && le>chan)) cout<<"YES";
		else cout<<"NO";
 		cout<<endl;
	}
}

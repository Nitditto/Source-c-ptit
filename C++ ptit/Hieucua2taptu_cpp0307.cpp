#include<bits/stdc++.h>
using namespace std;


int main(){
	int tl; cin>>tl;
	cin.ignore();
	while(tl--){
		string s1;
		getline(cin,s1);
		string s2;
		getline(cin,s2);
		set<string>se1,se2;
		stringstream ss1(s1),ss2(s2);
		string tmp1, tmp2;
		while(ss1>>tmp1){
			se1.insert(tmp1);
		}
		while(ss2>>tmp2){
			se2.insert(tmp2);
		}
		for(string x:se1){
			if(se2.find(x)==se2.end()){
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
}

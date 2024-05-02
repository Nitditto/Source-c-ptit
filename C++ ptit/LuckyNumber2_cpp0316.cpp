#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool LN(string s){
	ll sum=0;
	for(int i=0;i<s.length();i++){
		sum+=s[i]-'0';
	}
	while(sum>9){
		long long tmp=sum;
		sum=0;
		while(tmp>0){
			sum+=tmp%10;
			tmp/=10;
		}
	}
	return sum==9;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; 
		cin>>s;
		if(LN(s)) cout<<"1";
		else cout<<"0\n";
		cout<<endl;
	}
}

#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	int t; cin>>t;
	while(t--){
		cin.ignore();
		string s1, s2;
		cin>>s1>>s2;
		string min_s1 = s1, min_s2 = s2, max_s1 = s1, max_s2 = s2;
		for(int i=0;i<s1.length();i++){
			if(s1[i]=='6') min_s1[i]='5';
			if(s1[i]=='5') max_s1[i]='6';
		}
		for(int i=0;i<s2.length();i++){
			if(s2[i]=='6') min_s2[i]='5';
			if(s2[i]=='5') max_s2[i]='6';
		}
		ll min_sum = stoll(min_s1) + stoll(min_s2);
		ll max_sum = stoll(max_s1) + stoll(max_s2);
		cout<<min_sum<<" "<<max_sum<<endl;
	}
}


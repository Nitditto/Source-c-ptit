#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

int lt(int x, int y, ll p){
	ll res=1;
	for(int i=1;i<=y;i++){
		res*=x;
		res%=p;
	}
	return res%p;
}
int main(){
	int t; cin>>t;
	while(t--){
		int x,y;
		ll p;
		cin>>x>>y>>p;
		cout<<lt(x,y,p)<<endl;
	}
}



#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

const int P=1e9+7;
int gthua(int n){
	ll tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}
void tohop(){
	int n,r;
	cin>>n>>r;
	ll res=gthua(n)/(gthua(n-r)*gthua(r));
	cout<<res%P<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		tohop();
	}
}

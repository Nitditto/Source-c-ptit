#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

ll gt(ll n){
	ll tich=1;
	for(ll i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}
ll res(ll n){
	ll tu=gt(2*n);
	ll mau=gt(n)*gt(n+1);
	return tu/mau;
}
int main(){
	ll n; cin>>n;
	ll catalan=0;
	for(ll i=0;i<=n;i++){
		catalan+=res(n-i)*res(i);
	}
	cout<<catalan;
}

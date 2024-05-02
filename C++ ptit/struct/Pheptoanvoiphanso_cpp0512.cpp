#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}
struct PhanSo{
	ll tu,mau;
};
void rutgon(PhanSo &a){
	ll m=gcd(abs(a.mau),abs(a.tu));
	a.tu/=m;
	a.mau/=m;
}
PhanSo tong(PhanSo a,PhanSo b){
	PhanSo c;
	c.mau=a.mau*b.mau;
	c.tu=a.tu*b.mau+b.tu*a.mau;
	rutgon(c);
	return c;
}
PhanSo nhan(PhanSo a, PhanSo b){
	PhanSo c;
	c.tu=a.tu*b.tu;
	c.mau=a.mau*b.mau;
	rutgon(c);
	return c;
}
void process(PhanSo A,PhanSo B){
	PhanSo C=tong(A,B);
	C=nhan(C,C);
	PhanSo D=nhan(A,B);
	D=nhan(D,C);
	cout<<C.tu<<"/"<<C.mau<<" "<<D.tu<<"/"<<D.mau<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		PhanSo A;
		PhanSo B;
		cin>>A.tu>>A.mau>>B.tu>>B.mau;
		process(A,B);
	}
}

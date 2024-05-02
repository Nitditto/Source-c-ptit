#include<bits/stdc++.h>
using  namespace std;

long long gcd(long long a,  long long b){
	if(b==0) return a;
	return gcd(b,a%b);
}
struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &x){
	cin>>x.tu>>x.mau;
}
void rutgon(PhanSo &x){
	long long l=gcd(x.tu,x.mau);
	x.tu/=l;
	x.mau/=l;
}
void in(PhanSo x){
	cout<<x.tu<<"/"<<x.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

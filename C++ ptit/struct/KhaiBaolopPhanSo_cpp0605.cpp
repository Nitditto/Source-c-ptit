#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll gcd(ll a,ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}
class PhanSo{
	private:
		ll tu,mau;
	public:
		PhanSo(ll t=1, ll m=1){
			tu=t,mau=m;
		}
		PhanSo(const PhanSo &p){
			tu=p.tu;
			mau=p.mau;
		}
		friend void operator>>(istream& in,PhanSo &p){
			in>>p.tu>>p.mau;
		}
		void rutgon(){
			ll mc=gcd(tu,mau);
			tu/=mc;
			mau/=mc;
		}
		friend void operator<<(ostream& out,PhanSo &p){
			out<<p.tu<<"/"<<p.mau;
		}		
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

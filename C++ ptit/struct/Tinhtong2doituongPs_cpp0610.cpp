#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}
class PhanSo{
	private:
		ll tu,mau;
	public:
		PhanSo(ll t,ll m){
			tu=t;
			mau=m;
		}
		friend istream& operator>>(istream &in,PhanSo &x){
			in>>x.tu>>x.mau;
			return in;
		}
		friend void rutgon(PhanSo &x){
			ll mc=gcd(abs(x.tu),abs(x.mau));
			x.tu/=mc;
			x.mau/=mc;
		}
		friend PhanSo operator+(PhanSo p,PhanSo q){
			PhanSo a(1,1);
			rutgon(p);
			rutgon(q);
			a.tu=p.tu*q.mau+q.tu*p.mau;
			a.mau=q.mau*p.mau;
			rutgon(a);
			return a;
		}
		friend ostream& operator<<(ostream &out,PhanSo x){
			out<<x.tu<<"/"<<x.mau;
			return out;
		}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

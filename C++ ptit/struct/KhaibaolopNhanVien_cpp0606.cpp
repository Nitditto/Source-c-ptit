#include<bits/stdc++.h>
using namespace std;


class NhanVien{
	private:
		string mnv="00001",ten,b,c,d,e,f;
	public:
		friend istream& operator>>(istream &in,NhanVien &a);
		friend ostream& operator<<(ostream &out,NhanVien &a);
};
istream& operator>>(istream &in,NhanVien &a){
	getline(in,a.ten);
	getline(in,a.b);
	getline(in,a.c);
	getline(in,a.d);
	in>>a.e>>a.f;
	return in;
}
ostream& operator<<(ostream &out,NhanVien &a){
	out<<a.mnv<<" "<<a.ten<<" "<<a.b<<" "<<a.c<<" "<<a.d<<" "<<a.e<<" "<<a.f;
	return out;
}
int main(){
	NhanVien a;
	cin>>a;
	cout<<a;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma="B20DCCN001";
		string ten,lop,ns;
		float gpa;
	public:
		friend istream& operator>>(istream &in,SinhVien &a);
		friend ostream& operator<<(ostream &out,SinhVien a);
};

istream& operator>>(istream &in,SinhVien &a){
	getline(in,a.ten);
	in>>a.lop>>a.ns>>a.gpa;
	if(a.ns[1]=='/') a.ns="0"+a.ns;
	if(a.ns[4]=='/') a.ns.insert(3,"0");
	string res="";
	stringstream ss(a.ten);
	string token;
	while(ss>>token){
		res+=toupper(token[0]);
		for(int i=1;i<token.length();i++){
			res+=tolower(token[i]);
		}
		res+=" ";
	}
	res.erase(res.length()-1);
	a.ten=res;
	return in;
}
ostream& operator<<(ostream& out,SinhVien a){
	cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

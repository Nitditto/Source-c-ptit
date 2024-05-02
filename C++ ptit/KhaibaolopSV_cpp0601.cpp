#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string ten, lop, ns, msv="B20DCCN001";
	double gpa;
	void nhap(){
		getline(cin,ten);
		cin>>lop>>ns;
		cin>>gpa;
	}
	void xuat(){
		cout<<msv<<" "<<ten<<" "<<lop<<" ";
		vector<string> v;
		stringstream ss(ns);
		string token;
		while(getline(ss, token, '/')) {
			v.push_back(token);
		}
		for(int i=0;i<v.size();i++){
			if(v[i].length()==1) v[i]='0'+v[i];
		}
		cout<<v[0]<<"/"<<v[1]<<"/"<<v[2]<<" ";
		cout<<fixed<<setprecision(2)<<gpa;
	}
};

int main(){
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;
}


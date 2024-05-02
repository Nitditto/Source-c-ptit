#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string ten,gt,ns,dc,mst,hd;
	string msv=" 00001";
};
void nhap(NhanVien &a){
	getline(cin,a.ten);
	cin>>a.gt>>a.ns;
	scanf("\n");
	getline(cin,a.dc);
	scanf("\n");
	cin>>a.mst>>a.hd;
}
void in(NhanVien a){
	cout<<a.msv<<" ";
	cout<<a.ten<<" ";
	vector<string>v1,v2;
	stringstream ss(a.ns);
	string token;
	while(getline(ss,token,'/')){
		v1.push_back(token);
	}
	for(int i=0;i<v1.size();i++){
		if(v1[i].length()==1) v1[i]='0'+v1[i];
	}
	cout<<v1[0]<<"/"<<v1[1]<<"/"<<v1[2]<<" ";
	cout<<a.dc<<" "<<a.mst<<" ";
	stringstream ss1(a.hd);
	string token1;
	while(getline(ss,token1,'/')){
		v2.push_back(token1);
	}
	for(int i=0;i<v2.size();i++){
		if(v2[i].length()==1) v2[i]='0'+v2[i];
	}
	cout<<v2[0]<<"/"<<v2[1]<<"/"<<v2[2];
}
int main(){
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}

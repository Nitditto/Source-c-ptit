#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string a,b,c;
	float f;
};
void nhap(SinhVien a[],int n){
	for(int i=0;i<n;i++){
	cin.ignore();
	getline(cin,a[i].a);
	cin>>a[i].b>>a[i].c;
	cin.ignore();
	cin>>a[i].f;
	}
}
void in(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		cout<<"B20DCCN";
		string s=to_string(i+1);
		while(s.size()<3) s="0"+s;
		cout<<s<<" ";
		cout<<a[i].a<<" "<<a[i].b<<" ";
		if(a[i].c[1]=='/') a[i].c.insert(0,"0");
		if(a[i].c[4]=='/') a[i].c.insert(3,"0");
		cout<<a[i].c<<" "<<fixed<<setprecision(2)<<a[i].f<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string a,b,c,d,e,f,g;
};
void nhap(NhanVien &x){
	cin.ignore();
	getline(cin,x.b);
	cin>>x.c>>x.d;
	cin.ignore();
	getline(cin,x.e);
	cin>>x.f>>x.g;
}
void inds(NhanVien a[],int n){
	for(int i=0;i<n;i++){
		string s=to_string(i+1);
		while(s.size()<5) s="0"+s;
		cout<<s<<" ";
		cout<<a[i].b<<" "<<a[i].c<<" "<<a[i].d<<" "<<a[i].e<<" "<<a[i].f<<" "<<a[i].g<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

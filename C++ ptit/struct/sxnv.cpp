#include<bits/stdc++.h>
using namespace std;

struct  NhanVien{
	string a,b,c,d,e,f,mnv;
};
bool cmp(NhanVien x,NhanVien y){
	string s1=x.c, s2=y.c;
	int n1=(s1[0]-'0')*10+s1[1]-'0', t1=(s1[3]-'0')*10+s1[4]-'0',y1=stoi(s1.substr(6));
	int n2=(s2[0]-'0')*10+s2[1]-'0', t2=(s2[3]-'0')*10+s2[4]-'0',y2=stoi(s2.substr(6));
	if(y1!=y2) return y1<y2;
	if(t1!=t2) return t1<t2;
	return n1<n2;
}
void nhap(NhanVien &ds){
	cin.ignore();
	getline(cin,ds.a);
	cin>>ds.b>>ds.c;
//	cin.ignore();
//	getline(cin,ds.d);
//	cin.ignore();
//	cin>>ds.e>>ds.f;
}
void sapxep(NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		ds[i].mnv=to_string(i+1);
		while(ds[i].mnv.size()<5) ds[i].mnv="0"+ds[i].mnv;
	}
	sort(ds,ds+n,cmp);
}
void inds(NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		ds[i].mnv=to_string(i+1);
		while(ds[i].mnv.size()<5) ds[i].mnv="0"+ds[i].mnv;
		cout<<ds[i].mnv<<" ";
		cout<<ds[i].a<<" "<<ds[i].b<<" "<<ds[i].c<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

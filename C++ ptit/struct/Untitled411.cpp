//#include<bits/stdc++.h>
//using namespace std;
//
//struct  NhanVien{
//	string a,b,c,d,e,f,mnv;
//};
//int cnt=0;
//void nhap(NhanVien &ds){
//	if(cnt==0) 
//	cin.ignore();
//	ds.mnv="000";
//	if(cnt<9) ds.mnv+='0'+to_string(cnt+1);
//	else ds.mnv+=to_string(cnt+1);
//	getline(cin,ds.a);
//	getline(cin,ds.b);
//	getline(cin,ds.c);
//	getline(cin,ds.d);
//	getline(cin,ds.e);
//	getline(cin,ds.f);
//	cnt++;
//}
//void sapxep(NhanVien ds[],int n){
//	sort(ds, ds + n, [](NhanVien a, NhanVien b){
//		string s1=a.c, s2=b.c;
//		int n1=(s1[0]-'0')*10+s1[1]-'0', t1=(s1[3]-'0')*10+s1[4]-'0',y1=stoi(s1.substr(6));
//		int n2=(s2[0]-'0')*10+s2[1]-'0', t2=(s2[3]-'0')*10+s2[4]-'0',y2=stoi(s2.substr(6));
//		if(y1!=y2) return y1<y2;
//		if(n1!=n2) return n1<n2;
//		return t1<t2;
//	}
//	);
//}
//void inds(NhanVien ds[],int n){
//	for(int i=0;i<n;i++){
//		cout<<ds[i].mnv<<" "<<ds[i].a<<" "<<ds[i].b<<" "<<ds[i].c<<" "<<ds[i].d<<" "<<ds[i].e<<" "<<ds[i].f<<endl;
//	}
//}
//int main(){
//    struct NhanVien ds[50];
//    int N,i;
//    cin >> N;
//    for(i = 0; i < N; i++) nhap(ds[i]);
//    sapxep(ds, N);
//    inds(ds, N);
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;

struct mathang{
	int ma;
	string ten,nhom;
	double gia1,gia2;
	double lai;
};
void nhap(mathang &x){
	getline(cin.ignore(),x.ten);
	getline(cin,x.nhom);
	cin>>x.gia1>>x.gia2;
	x.lai=x.gia2-x.gia1;
}
bool cmp(mathang a,mathang b){
	return a.lai>b.lai;
}
void sapxep(mathang ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(mathang ds){
		cout<<ds.ma<<" "<<ds.ten<<" "<<ds.nhom<<" "<<fixed<<setprecision(2)<<ds.lai<<endl;
}
int main(){
	int n; cin>>n;
	mathang x[n];
	for(int i=0;i<n;i++) {
		x[i].ma = i+1;
		nhap(x[i]);
	}
	sapxep(x,n);
	for(int i=0;i<n;i++) in(x[i]);
	return 0;
}


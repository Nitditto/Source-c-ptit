#include<bits/stdc++.h>
using namespace std;
//3
//maytinh
//dientu
//16400
//17699
//tulanh
//dienlanh
//18300
//25999
//banh
//tieudung
//27.5
//37
struct mathang{
	string ma,ten,nhom;
	double gia1,gia2;
	double lai;
};
int cnt=0;
void nhap(mathang &x){
	x.ma+=to_string(cnt+1);
	getline(cin.ignore(),x.ten);
	getline(cin,x.nhom);
	cin>>x.gia1>>x.gia2;
	x.lai=x.gia2-x.gia1;
	++cnt;
}
bool  cmp(mathang a,mathang b){
	return a.lai>b.lai;
}
void sapxep(mathang ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(mathang ds[],int  n){
	for(int i=0;i<n;i++){
		cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].nhom<<" "<<fixed<<setprecision(2)<<ds[i].lai<<endl;
	}
}
int main(){
	int n; cin>>n;
	struct mathang x[n];
	for(int i=0;i<n;i++) nhap(x[i]);
	sapxep(x,n);
	in(x,n);
}
//#include<bits/stdc++.h>
//using namespace std;
//
//struct mathang{
//	int ma;
//	string ten,nhom;
//	double gia1,gia2;
//	double lai;
//};
//void nhap(mathang &x){
//	getline(cin.ignore(),x.ten);
//	getline(cin,x.nhom);
//	cin>>x.gia1>>x.gia2;
//	x.lai=x.gia2-x.gia1;
//}
//bool cmp(mathang a,mathang b){
//	return a.lai>b.lai;
//}
//void sapxep(mathang ds[],int n){
//	sort(ds,ds+n,cmp);
//}
//void in(mathang ds){
//		cout<<ds.ma<<" "<<ds.ten<<" "<<ds.nhom<<" "<<fixed<<setprecision(2)<<ds.lai<<endl;
//}
//int main(){
//	int n; cin>>n;
//	mathang x[n];
//	for(int i=0;i<n;i++) {
//		x[i].ma = i+1;
//		nhap(x[i]);
//	}
//	sapxep(x,n);
//	for(int i=0;i<n;i++) in(x[i]);
//	return 0;
//}

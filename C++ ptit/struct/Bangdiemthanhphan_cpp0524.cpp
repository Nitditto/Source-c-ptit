#include<bits/stdc++.h>
using namespace std;

//3
//B20DCCN999
//Nguyen Van An
//D20CQCN04-B
//10.0
//9.0
//8.0
//B20DCAT001
//Le Van Nam
//D20CQAT02-B
//6.0
//6.0
//4.0
//B20DCCN111
//Tran Hoa Binh
//D20CQCN04-B
//9.0
//5.0
//6.0
struct SinhVien{
	string msv,ten,lop;
	double diem1,diem2,diem3;
};
void nhap(SinhVien &x){
	cin>>x.msv;
	cin.ignore();
	getline(cin,x.ten);
	getline(cin,x.lop);
	cin>>x.diem1>>x.diem2>>x.diem3;
	cin.ignore();
}
bool cmp(SinhVien a,SinhVien b){
	return a.msv<b.msv;
}
void sap_xep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}

void in_ds(SinhVien ds[],int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		cout<<cnt+1<<" ";
		cout<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" ";
		cout<<fixed<<setprecision(1)<<ds[i].diem1<<" ";
		cout<<fixed<<setprecision(1)<<ds[i].diem2<<" ";
		cout<<fixed<<setprecision(1)<<ds[i].diem3<<endl;	
		++cnt;	
	}
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

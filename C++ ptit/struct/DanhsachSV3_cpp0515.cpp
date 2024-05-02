#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

string vietH(string s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
void chuanH(string &s){
	vector<string>v;
	string w;
	stringstream ss(s);
	while(ss>>w){
		w=vietH(w);
		v.push_back(w);
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i];
		if(i!=v.size()-1) cout<<" ";
	}
}
struct SinhVien{
	string a,b,c,msv="B20DCCN";
	string so;
	int t;
	float d;
};
void nhap(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,a[i].a);
		cin>>a[i].b>>a[i].c;
		cin.ignore();
		cin>>a[i].d;
	}
}
void sapxep(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		a[i].t=i+1;
//		a[i].msv=to_string(i+1);
	//	while(a[i].msv.size()<3) a[i].msv="0"+a[i].msv;
		}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].d<a[j].d){
				swap(a[i],a[j]);
			}
		}
	}
}
void in(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		if(a[i].t<10) 
		cout<<"B20DCCN00"<<a[i].t;
		else cout<<"B20DCCN0"<<a[i].t;
		cout<<" ";
//		string s=to_string(i+1);
//		while(s.size()<3) s="0"+s;
//		cout<<s<<" ";
		chuanH(a[i].a);
		cout<<" "<<a[i].b<<" ";
		if(a[i].c[1]=='/') a[i].c.insert(0,"0");
		if(a[i].c[4]=='/') a[i].c.insert(3,"0");
		cout<<a[i].c<<" "<<fixed<<setprecision(2)<<a[i].d<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

struct ThiSinh{
	string ten, ns;
	float diem1,diem2,diem3, tongdiem;
};

void nhap(ThiSinh &A){
	getline(cin,A.ten);
	cin>>A.ns;
	scanf("\n");
	cin>>A.diem1>>A.diem2>>A.diem3;
	A.tongdiem=A.diem1+A.diem2+A.diem3;
}

void in(ThiSinh A){
	cout<<A.ten<<" "<<A.ns<<" ";
	cout<<fixed<<setprecision(1)<<A.tongdiem;
}

int main(){
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}


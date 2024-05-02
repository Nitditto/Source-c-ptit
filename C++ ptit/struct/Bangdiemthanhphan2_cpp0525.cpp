#include<bits/stdc++.h>
using namespace std;

struct sv{
	string msv,ten,lop;
	float a,b,c;
};
bool cmp(sv A, sv B) {
	if (A.ten < B.ten)return true;
	return false;
}
void nhap(sv& A) {
	getline(cin, A.msv);
	getline(cin, A.ten);
	getline(cin, A.lop);
	cin >> A.a >> A.b >> A.c;
	getchar();
}
void xuat(sv A) {
	cout <<A.msv<<" "<< A.ten<<" "<<A.lop<<" "<<fixed<<setprecision(1)<<A.a<<" "<<A.b<<" "<< A.c;
}
int main() {
	sv M[100];
	int n; cin>>n;
	getchar();
	for (int i = 0; i < n; i++)nhap(M[i]);
	sort(M, M + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " ";
		xuat(M[i]);
		cout << endl;
	}
}

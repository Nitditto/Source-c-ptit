#include<bits/stdc++.h>

using namespace std;


//Nguyen Van Truong
//B23DCCE095
//05/10/2005
//BAC NINH
//4.0
struct sinhvien{
	string ten,msv,ns,qq;
	double gpa;
	void in(){
		cout<<ten<<" "<<msv<<" "<<ns<<" "<<qq<<" "<<gpa<<endl;
	}
	void nhap(){
		getline(cin,ten);
		cin>>msv>>ns;
		scanf("\n");
		getline(cin,qq);
		cin>>gpa;
		
	}
};
void output(sinhvien a){
	cout<<a.ten<<" "<<a.msv<<" "<<a.ns<<" "<<a.qq<<" "<<a.gpa<<endl;
}
void input(sinhvien &a){
	scanf("\n");
	getline(cin,a.ten);
	cin>>a.msv>>a.ns;
	scanf("\n");
	getline(cin,a.qq);
	cin>>a.gpa;
} 
int main(){
	sinhvien x;
	x.nhap(); output(x);
//	sinhvine y{"Nguyen Van Truong","B23DCCE095","05/10/2005","BAC NINH",4.0}; 
//	getline(cin,x.ten);
//	cin>>x.msv>>x.ns;
//	scanf("\n");
//	getline(cin,x.qq);
//	cin>>x.gpa;
	x.in();
//	y.in();
	input(x);
}
//int main(){
//	sinhvien z;
//	input(z);
//	output(z);
//}

/*CONSTRUCTOR - HAM KHOI TAO
-Khong co kieu tra ve
-Ten ham chinh la ten struct
*/


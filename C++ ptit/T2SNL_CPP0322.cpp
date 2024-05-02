#include<bits/stdc++.h>

using namespace std;

void lat(int a[], int n){
	int l=0, r=n-1;
	while(l<r){
		swap(a[l],a[r]);
		++l;
		--r;
	}
}
void add(string a, string b){
	int n1=a.length(), n2=b.length();
	int n=0;
	int x[n1], y[n1], z[n1+1];
	for(int i=0; i<n1;i++) x[i]=a[i]-'0';
	for(int i=0; i<n2;i++) y[i]=b[i]-'0';
	lat(x,n1);
	lat(y,n2);
	for(int i=n2;i<n1;i++){
		y[i]=0;		
	}
	int nho=0;
	for(int i=0;i<n1;i++){
		int tmp= x[i]+ y[i]+ nho;
		z[n++]=tmp%10;
		nho=tmp/10;
		
	}
	if(nho) z[n++]=nho;
	for(int i=n-1;i>=0;i--) cout<<z[i];
	}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string a,b; cin>>a>>b;
		if(a.length()>=b.length()) add(a,b);
		else add(b,a);
		cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;

int solve(int a[][100],int n){
	int b[100]={0}, c[100]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[i]+=a[i][j];
			c[j]+=a[i][j];
		}
	}
	int smax=0;
	for(int i=0;i<n;i++) if(b[i]>smax) smax=b[i];
	for(int i=0;i<n;i++){
		if(c[i]>smax) smax=c[i];
	}
	int sum=0;
	for(int i=0, j=0; i<n&&j<n;){
		int a=max(smax-b[i],smax-c[j]);
		b[i]+=a;
		c[j]+=a;
		sum+=a;
		if(b[i]==smax) i++;
		if(c[j]==smax) j++;
	}
	return sum;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100][100];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		cout<<solve(a,n)<<endl;
	}
	
}

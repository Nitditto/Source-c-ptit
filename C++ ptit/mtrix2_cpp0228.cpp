#include<bits/stdc++.h>

using namespace std;

void mtrix2(){
	int n; cin>>n;
	int a[n][n];
	int num=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=num++;
		}
	}
	int h1=0, h2=n-1, c1=0, c2=n-1;
	while(h1<=h2 && c1<=c2){
		for(int i=h2-1;i>=0;i--){
			cout<<a[i][c1+1]<<" ";
		}
		++c1;
		for(int i=c1+1;i<=c2;i++){
			cout<<a[h1][i]<<" ";
		}
		++h1;
		if(h1<=h2){
			for(int i=h1;i<=h2;i++){
				cout<<a[i][c2]<<" ";
			}
			continue;
		}
		for(int i=h1;i<=h2;i++){
			cout<<a[i][c2-1]<<" ";
		}
		--c2;
		for(int i=c2;i>=0;i--){
			cout<<a[h2][i]<<" ";
		}
		--h2;
		if(h1<=h2)
		for(int i=h2;i>=0;i--){
			cout<<a[i][0]<<" ";
		}
	}
}
int main(){
	int t;  cin>>t;
	while(t--){
		mtrix2();
	}
}

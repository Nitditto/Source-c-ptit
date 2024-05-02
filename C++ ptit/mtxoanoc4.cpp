#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cin>>a[i][j];
	}
	vector<int>v;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			v.push_back(a[i][j]);
		}
	}
	sort(v.begin(),v.end());
	int b[n][n];
	int cnt=0;
	int h1=0, h2=n-1, c1=0, c2=n-1;
	while(h1<=h2 && c1<=c2){
		for(int i=c1;i<=c2;i++){
			b[h1][i]=v[cnt++];
		}
		++h1;
		for(int i=h1;i<=h2;i++){
			b[i][c2]=v[cnt++];
		}
		--c2;
		if(h1<=h2){
			for(int i=c2;i>=c1;i--){
				b[h2][i]=v[cnt++];
			}
			--h2;
		}
		if(c1<=c2){
			for(int i=h2;i>=h1;i--){
				b[i][c1]=v[cnt++];
			}
			++c1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}

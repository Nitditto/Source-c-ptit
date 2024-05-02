#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n, k; cin>>n>>k;
		--k;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		vector<int>v;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				v.push_back(a[i][j]);
			}
		}
		sort(v.begin(),v.end());
	
		cout<<v[k]<<endl;
	}
}

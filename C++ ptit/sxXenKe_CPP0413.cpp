#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n ; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int m=n/2;
		vector<int>v1;
		vector<int>v2;
		if(m%2!=0){
			for(int i=0;i<m;i++){
				v2.push_back(a[i]);
			}
			for(int i=n-1;i>=m+1;i--){
				v1.push_back(a[i]);
			}
			for(int i=0,j=0;i<v1.size(), j<v2.size();i++,j++){
				cout<<v1[i]<<" "<<v2[j]<<" ";
			}
			cout<<a[m];
		}
		else{
			for(int i=0;i<m;i++){
				v2.push_back(a[i]);
			}
			for(int i=n-1;i>=m;i--){
				v1.push_back(a[i]);
			}
			for(int i=0,j=0;i<v1.size(), j<v2.size();i++,j++){
				cout<<v1[i]<<" "<<v2[j]<<" ";
			}
		}
		cout<<endl;
	}
}


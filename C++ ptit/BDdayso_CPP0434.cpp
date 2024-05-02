#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n ; cin>>n;
		int a[n];
		for(auto &x:a){
			cin>>x;
		}
		vector<int>v;
		long long first=a[0]*a[1];
		v.push_back(first);
		for(int i=1;i<n-1;i++){
			long long tmp=a[i-1]*a[i+1];
			v.push_back(tmp);
		}
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		long long last=a[n-1]*a[n-2];
		cout<<last<<endl;
	}
}

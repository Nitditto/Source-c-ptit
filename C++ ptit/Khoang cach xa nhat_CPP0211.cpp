#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int>v;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0,j=n-1;i<=j;){
				if(a[i]<=a[j]){
					v.push_back(j-i);
				}
				++i;
				--j;
			}
			sort(v.begin(),v.end(),greater<int>());
			cout<<v[0]<<endl;
		}
	}


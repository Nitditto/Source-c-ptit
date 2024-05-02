#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n, x; cin>>n>>x;
		int a[n];
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		int ok=-1;
		for(int i=0;i<n;i++){
			if(mp[a[i]+x]){
				ok=1;
				break;
			}
		}
		cout<<ok<<endl;
	}
}

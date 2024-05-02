#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n, k; cin>>n>>k;
		int a[n];
		for(auto &x:a) cin>>x;
		int cnt=0;
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]-a[i]<k)
				++cnt;
			}
		}
		cout<<cnt<<endl;
	}
}

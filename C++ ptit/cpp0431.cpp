#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(auto &x:a) cin>>x;
		sort(a,a+n);
		long long res=0;
		for(long long i=0;i<n;i++){
			long long j=upper_bound(a+i+1,a+n,a[i]+k-1)-a;
			res+=j-i-1;
		}
		cout<<res<<endl;
	}
}

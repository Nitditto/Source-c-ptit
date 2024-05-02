#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

const int K=1000000007;
int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
		int a[n];
		ll res=0, lt=1;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=n-1;i>=0;i--){
			res+=a[i]*lt;
			res%=K;
			lt*=x;
			lt%=K;
		}
		cout<<res%K<<endl;
	}
}

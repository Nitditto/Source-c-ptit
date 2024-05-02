#include<bits/stdc++.h>

using namespace std;
const int MOD=1000000007;
typedef long long int ll;

ll gcd(ll a, ll b){ //(a*b)%c == ((a%c)*(b%c))%c
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		ll tich=1;
		for(int i=0;i<n;i++){
			tich*=a[i]; 
			tich%=MOD;
			a[i]%=MOD;
		}
		int ans=a[0];
		for(int i=1;i<n;i++){
			 ans=gcd(ans,a[i]);
		}
		ll res=1;
		for(int i=1;i<=ans;i++){
			res*=tich;
			res%=MOD;
			tich%=MOD;
		}
		cout<<res<<endl;
	}
	
}

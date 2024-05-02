#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		set<int>s;
		for(int i=0;i<n;i++){
			while(a[i]){
				s.insert(a[i]%10);
				a[i]/=10;
			}
		}
		for(auto it:s){
			cout<<it<<" ";
		}
		cout<<endl;
	}
}

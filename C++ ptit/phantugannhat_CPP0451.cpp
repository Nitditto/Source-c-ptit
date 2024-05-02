#include<bits/stdc++.h>

using namespace std; 

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n]; 
		for(int i=0;i<n;i++) cin>>a[i];
		int k,x; cin>>k>>x;
		int res;
		for(int i=0;i<n;i++){
			if(x==a[i]){
				res=i;
				break;
			}
		}
		int m=k/2;
		for(int i=res;i>=res-m;i--){
			cout<<a[i]<<" ";
		}
		for(int i=res;i<=res+m;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
}

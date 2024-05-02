#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		int l=0;
		int ok=0, res;
		for(int i=0;i<n;i++){
			sum-=a[i];
			if(l==sum){
				res=i+1;
				ok=1;
				break;
			}
			l+=a[i];
		}
		if(ok==1) cout<<res;
		else cout<<"-1";
		cout<<endl;
	}
}

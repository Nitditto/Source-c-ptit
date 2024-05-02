#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int max=-1e9;
		for(int i=n-1;i>=0;i--){
			for(int j=i-1;j>=0;j--){
				if(a[i]-a[j]>max){
					max=a[i]-a[j];
				}
			}
		}
		if(max<=0) cout<<"-1"<<endl;
		else cout<<max<<endl;
	}
}

#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		int cnt=0;
		sort(a.begin(),a.end());
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]>1)
			cnt+=a[i]-a[i-1]-1;
		}
		cout<<cnt<<endl;
	}
}

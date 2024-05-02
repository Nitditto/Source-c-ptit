#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; 
		cin>>n>>k;
		int a[n];
		for(auto &x:a) cin>>x;
		int l = 0;
		for(int i=0;i<n;i++) {
			if(a[i]<=k){
				l++;
			}
		}
		int cnt = 0;
		for(int i=0;i<l;i++){
			if(a[i]<=k){
				cnt++;
			}
		}
		int ans = cnt;
		for(int i=l;i<n;i++){
			if(a[i-l]<=k) --cnt;
			if(a[i]<=k) ++cnt;
			ans=max(ans,cnt); 
		}
		cout<<l-ans<<endl; // tim cua so co so phan tu <=k nhieu nhat va chi con cac so ngoai cua so <=k them vao la xong
	}
}


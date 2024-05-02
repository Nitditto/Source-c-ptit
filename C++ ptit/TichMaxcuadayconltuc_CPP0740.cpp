#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		vector<int>v1;
		ll tich=1;
		for(int i=0;i<n-1;){
			tich*=a[i];
			for(int j=i+1;j<n;j++){
				tich*=a[j];
				if(a[j]==0)
				}
			}
			v1.push_back(tich);
			tich=1;
		}
		sort(v1.begin(),v1.end(),greater<int>());
		cout<<v1[0]<<endl;
	}
}

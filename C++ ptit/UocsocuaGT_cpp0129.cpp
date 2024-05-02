#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int cnt=0;
		int check=0;
		for(int i=2;i<=n;i++){
			int k=i;
			while(k%p==0){
				cnt++;
				check=1;
				k/=p;
			}
		}
			if(check) cout<<cnt;
			else cout<<"0";
			cout<<endl;
	}
}

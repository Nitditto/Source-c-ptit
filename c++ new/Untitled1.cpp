#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

//int main(){
//	int tl; cin>>tl;
//	while(tl--){
//		ll n; cin>>n;
//		for(int i=2;i<=sqrt(n);i++){
//			while(n%i==0 && n>0){
//				n/=i;	
//			}
//		}
//		if(n>1) cout<<n<<endl;
//	}
//}

int nto(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll b[n];
		for(int i=0; i<n; i++){
			for(int j=2; j<=sqrt(a[i]); j++){
				if(a[i]%j==0){
					b[i]=
				} 
			}
		}
	}
}

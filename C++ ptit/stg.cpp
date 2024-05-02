#include<bits/stdc++.h>

using namespace std;


bool stg(int n){
	int tmp=n;
	int ok=0;
	if(n%10 > (n/10)%10) ok=1;
	if(ok){
		while(n){
			if(n%10<=(n/10)%10) return false;
			n/=10;
		}
	}
	while(n>10){
		if(n%10>=(n/10)%10) return false;
		n/=10;
	}
	for(int i=2;i<=sqrt(tmp);i++){
		if(tmp%i==0) return false;
	}
	return tmp>1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int cnt=0;
		int n; cin>>n;
		for(int i=pow(10,n-1);i<=pow(10,n);i++){
			if(stg(i)) ++cnt;
		}
		cout<<cnt<<endl;
		
	}
}

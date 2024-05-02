#include<bits/stdc++.h>

using namespace std;

int isprime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int f(int x){
	int t=0;
	for(int k=1;k<=x;k++){
		if(gcd(x,k)==1) t++;
	}
	return isprime(t);
}
int main(){
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		cout<<f(x)<<endl;
	}
}

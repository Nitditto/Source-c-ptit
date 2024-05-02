#include<bits/stdc++.h>
#include<iostream>

typedef long long int ll;
using namespace std;
//
//int main(){
//	float x=3.1234567;
//	cout<<fixed<<setprecision(3)<<x<<endl;
//}
//int main() {
//   double x;
//    cin>>x;
//    cout<<fixed<<setprecision(2)<<sqrt(x)<<endl;
//    cout<<fixed<<setprecision(3)<<cbrt(x);
//    return 0;
//}

//Tinh to hop Ck_n;
//int gt(int n){
//	ll res=1;
//	for(int i=1;i<=n;i++){
//		res*=i;
//	}
//	return res;
//}
//ll tohop1(int n,int k){
//	ll ngt=gt(n);
//	ll kgt=gt(k);
//	ll nkgt=gt(n-k);
//	return ngt/(kgt*nkgt);
//}
//ll tohop2(int n, int k){
//	ll res=1;
//	for(int i=1;i<=k;i++){
//		res*=(n-i+1);
//		res/=i;
//	}
//	return res;
//} 
//ll tohop3(int n,int k){
//	ll c[n+1][k+1];
//	for(int i=0;i<=n;i++){
//		for(int j=0;j<=i;j++){
//			if(j==0 || i==j) c[i][j]=1;
//			else c[i][j]=c[i-1][j-1]+c[i-1][j]; //Ck_n=C(k-1)_(n-1) + C(k)_(n-1);
//		}
//	}
//}
//
////sang so nto
//
//const int n=1000000;
//bool nt[n+1];
//void sieve(){
//	for(int i=0;i<=n;i++){
//		nt[i]=true;
//	}
//	nt[0]=nt[1]=false;
//	for(int i=2; i<=sqrt(n);i++){
//		if(nt[i]==true){
//			for(int j=i*i;j<=n;j+=i){
//				nt[j]=false;
//			}
//		}
//	}
//}
//int main(){
//	sieve();
//	int n; cin>>n;
//	for(int i=0;i<=n;i++){
//		if(nt[i]==true){
//			cout<<i<<" ";
//		}
//	}
//}


//Doi xung
//bool dx(int a[],int n){
//	int l=0, r=n-1;
//	while(l<=r){
//		if(a[l]!=a[r]) return false;
//		++l;
//		--r;
//	}
//	return true;
//}
//int revense(int a[], int n){
//	int l=0, r=n-1;
//	while(l<=r){
//		swap(a[l],a[r]);
//		++l;
//		--r;
//		
//	}
//}
//int main(){
//	int n; cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++) cin>>a[i];
//	revense(a,n);
//	for(int i=0;i<n;i++) cout<<a[i]<<" ";
//	if(dx(a,n)) cout<<"YES"<<endl;
//	else cout<<"NO"<<endl;
//}

//(a+b)%c = ((a%c) + (b%c))%c
//(a-b)%c = ((a%c) - (b%c))%c
//(a*b)%c = ((a%c) * (b%c))%c
//(a/b)%c = ((a%c) * (b^-1%c))%c

//int lt(int x, int y, ll p){
//	ll res=1;
//	for(int i=1;i<=y;i++){
//		res*=x;
//		res%=p;
//	}
//	return res%p;
//}
//int main(){
//	int t; cin>>t;
//	while(t--){
//		int x,y;
//		ll p;
//		cin>>x>>y>>p;
//		cout<<lt(x,y,p)<<endl;
//	}
//}


//set
//int main(){
//	set<int>se;
//	se.insert(50);
//	se.insert(1);
//	se.insert(2);
//	se.insert(3);
//	cout<<se.size()<<endl;
//	for(int x:se){
//		cout<<x<<" ";
//	}
//	cout<<endl;
//	for(set<int>::iterator it=se.begin(); it!=se.end(); ++it){
//		cout<<*it<<" ";
//	}
//	cout<<endl;
//	for(auto it=se.begin();it!=se.end();++it){
//		cout<<*it<<" ";
//	}
//}

//insert() : logN
//map[key] = value=> mp.insert({key,value)}


//int  main(){
//	map<int,int>mp;
//	mp[1]++; //mp[1]=1;
	
//	map<int ,int>mp;
//	mp[1]=100;
//	mp[2]=200;
//	mp[3]=300;
//	//for each
//	for(auto x: mp){
//		cout<<x.first<<" "<<x.second<<endl;
//	}
//	//interator
//	cout<<endl;
//	for(map<int, int>::iterator it = mp.begin(); it!=mp.end();++it){
//		cout<<(*it).first<<" "<<(*it).second<<endl;
//	}
//	int n; cin>>n;
//	map<ll,int>>mp;
//	ll a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		mp[a[i]]++;
//	}
//	for(int i=0;i<n;i++){
//		if(mp[a[i]]!=0){
//			cout<<a[i]<<" "<<mp[a[i]]<<endl;
//			mp[a[i]]=0;
//		}
//	}
//}

//bool cmp( pair<int, int> a, pair<int,int> b){
//	if(a.second != b.second) return a.second > b.second;
//	return a.first<b.first;
//}
//int main(){
//	int n; cin>>n;
//	int a[n];
//	map<int,int>mp;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		mp[a[i]]++;
//	}
//	vector<pair<int,int>>v;
//	for(auto it:mp){
//		v.push_back(it);
//	}
//	sort(begin(v), end(v),cmp);
//	for(auto it:v){
//		for(int j=0;j<it.second;j++){
//			cout<<it.first<<" ";
//		}
//	}	
//}

int main(){
	strin s="java python  php";
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		cout<<tmp<<endl;
	}
	return 0;
}

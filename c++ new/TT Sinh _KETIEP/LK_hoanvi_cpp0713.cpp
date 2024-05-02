#include<bits/stdc++.h>
using namespace std;

int n, a[100],ok;

void ktao(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]){
		--i;
	}
	if(i==0) ok=0;
	else{ 
		int j=n;
		while(a[i]>a[j]) --j; //tim vi trí so nho nhat trong khoang i+1;n lon hon a[i
		swap(a[i],a[j]); 
		int l=i+1, r=n;
		while(l<r){
			swap(a[l],a[r]);
			++l;
			--r;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		ktao();
		while(ok){
			for(int i=1;i<=n;i++){
				cout<<a[i];
			}
			cout<<" ";
			sinh();
		}
		cout<<endl;
		}
}

//int main(){
//	int t; cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int a[n];
//		for(int i=0;i<n;i++){
//			a[i]=i+1;
//		}
//		do{
//			for(int i=0;i<n;i++){
//				cout<<a[i];
//			}
//			cout<<" ";
//		}
//		while(next_permutation(a,a+n));
//		cout<<endl;
//	}
//	return 0;
//}


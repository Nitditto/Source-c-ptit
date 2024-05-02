#include<bits/stdc++.h>

using namespace std;

//int solution(int a[],int n){
//	int ans=0;
//	for(int i=0,j=n-1;i<=j;){
//		if(a[i]==a[j]){
//			i++;
//			j--;
//		}
//		else if(a[i]>a[j]){
//			j--;
//			a[j]+=a[j+1];
//			ans++;
//		}
//		else {
//			i++;
//			a[i]+=a[i-1];
//			ans++;
//		}
//	}
//	return ans;
//}
//int main(){
//	int t; cin>>t;
//	while(t--){
//		int n; cin>>n;
//		int a[n]; 
//		for(int i=0; i<n;i++) cin>>a[i];
//		cout<<solution(a,n)<<endl;
//	}
//}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int l=0, r=n-1;
		int cnt=0;
		while(l<=r){
			if(a[l]==a[r]){
				l++;
				r--;
			}
			else if(a[l]<a[r]){
				l++;
				a[l]+=a[l-1];
				cnt++;
			}
			else {
				r--;
				a[r]+=a[r+1];
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}

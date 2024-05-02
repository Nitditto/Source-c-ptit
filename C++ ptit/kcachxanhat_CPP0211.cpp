#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int max=-1e9;
		for(int i=n-1;i>=0;i--){
			for(int j=i-1;j>=0;j--){
				if(a[i]>=a[j] && i-j>max){
					max=i-j;
				}
			}
		}
		cout<<max<<endl;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int max1=-1e9;
		for(int i=0;i<n;i++){
		    for(int j=n-1;j>=i;j--){
		        if(j-i<=max1){
		            break;
		        }
		        if(a[i]<a[j]){
		            max1=max(max1,j-i);
		        }
		    }
		}
		cout<<max1<<endl;
	}
}

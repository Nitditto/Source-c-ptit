#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int>v(n);
		int max=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(v[i]>max) max=v[i];
		}
		vector<int>a(max+1);
		for(int i=0;i<=max;i++){
			a[i]=0; //so khong co trong mang thi khong xet
		}
		for(int i=0;i<n;i++){
			a[v[i]]++; 
		}
		for(int i=0;i<n;i++){
			if(v[i]==max) cout<<"_ ";
			else 
				for(int j=v[i]+1;j<=max;j++){ //tim phan tu nho nhat trong mang lon hon a[i] 
					if(a[j]>0){
						cout<<j<<" ";
						break;
						}
				}
		}
		cout<<endl;
	}
}

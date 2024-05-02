#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		 int maxsum=0,a1[100]={0},a2[100]={0};
		 for(int i=0;i<n;i++){
		 	for(int j=0;j<n;j++){
		 		a1[i]+=a[i][j];
		 		a2[j]+=a[i][j];
			 }
		 }
		 for(int i=0;i<n;i++){
		 	if(a1[i]>maxsum)
			 maxsum=a1[i];
		 }
		 for(int i=0;i<n;i++){
		 	if(a2[i]>maxsum)
		 	maxsum=a2[i];
		 }
		 int sum=0;
		 for(int i=0,j=0;j<n&&i<n;){
		 	int a=max(maxsum-a1[i],maxsum-a2[j]);
		 	a1[i]+=a;
		 	a2[j]+=a;
		 	if(a1[i]==maxsum) ++i;
		 	if(a2[j]==maxsum) ++j;
			 sum+=a;
		 }
		 cout<<sum<<endl;
	}
}

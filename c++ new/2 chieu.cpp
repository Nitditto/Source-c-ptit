#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}

int main(){
	int n,m;
	cin>>n;
	vector<int>a[n]; //moi dong la 1 vecto va m là so tu them vao vecto
	//4                     
	//2 1 2					//1 2
	//2 3 4					//3 4
	//2 1 4 				//1 4
	//5 1 6 7 8 9			//1 6 7 8 9
	for(int i=0;i<n;i++){
		int m; cin >> m;
		for(int j=0; j<m; j++){
			int x; cin >> x;
			a[i].push_back(x);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j< a[i].size(); j++){
			cout<< a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

int main(){
	int n; cin>>n;
	string a[n];
	cin.ingore();
	for(int i=0;i<n;i++){
		getline(cin,a[i]);
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> m(n),v(n);
		for (int i=0;i<n;i++)cin>>m[i];
		sort(m.begin(),m.end());
		int a=0,b=n-1;
		for (int i = 0; i < n; i++) {
			if (i%2==0)v[i]=m[b--];
			if (i%2==1)v[i]=m[a++];;
		}
		for (int i=0;i<n;i++)cout << v[i] << " ";
		cout << endl;
	}
}

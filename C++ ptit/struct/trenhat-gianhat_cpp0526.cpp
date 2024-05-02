#include<bits/stdc++.h>
using namespace std;

struct old{
	string ten,ns;
};
bool cmp(old a, old b){
	string s1=a.ns, s2=b.ns;
	int n1=(s1[0]-'0')*10+(s1[1]-'0'), t1=(s1[3]-'0')*10+(s1[4]-'0'), y1=stoi(s1.substr(6));
	int n2=(s2[0]-'0')*10+(s2[1]-'0'), t2=(s2[3]-'0')*10+(s2[4]-'0'), y2=stoi(s2.substr(6));
	if(y1!=y2) return y1<y2;
	if(t1!=t2) return t1<t2;
	return n1<n2;
}
int main(){
	int n; cin>>n;
	old a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].ten>>a[i].ns;
	}
	sort(a,a+n,cmp);
	cout<<a[n-1].ten<<endl<<a[0].ten;
}

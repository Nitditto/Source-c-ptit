#include<bits/stdc++.h>
using namespace std;

//int main(){
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int t; cin>>t;
//	while(t--){
//		int n; cin>>n;
//		int a[n];
//		for(auto &x:a) cin>>x;
//		vector<int>v;
//		int cnt=0;
//		for(int i=0;i<n;i++){
//			if(a[i]!=0 && a[i]==a[i+1]){
//				v.push_back(a[i]*2);
//				a[i+1]=0;
//			}
//			else if(a[i]!=0){
//				v.push_back(a[i]);
//			}
//		}
//        for(int i=0;i<n;i++){
//            if(a[i]==0) ++cnt;
//        }
//		for(int i=0;i<v.size();i++){
//				cout<<v[i]<<" ";
//			
//		}
//		for(int i=0;i<cnt;i++){
//			cout<<"0"<<" ";
//		}
//		cout<<endl;
//	}
//}
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int t; cin>>t;
//    while(t--){
//        int n; cin>>n;
//        vector<int> a(n);
//        for(auto &x:a) cin>>x;
//        vector<int> v;
//        for(int i=0;i<n;i++){
//            if(a[i]!=0 && i+1<n && a[i]==a[i+1]){
//                v.push_back(a[i]*2);
//                a[i+1]=0;
//            }
//            else if(a[i]!=0){
//                v.push_back(a[i]);
//            }
//        }
//        int cnt = count(a.begin(), a.end(), 0);
//        for(int i=0;i<cnt;i++){
//            v.push_back(0);
//        }
//        for(auto &x:v){
//            cout<<x<<" ";
//        }
//        cout<<endl;
//    }
//}


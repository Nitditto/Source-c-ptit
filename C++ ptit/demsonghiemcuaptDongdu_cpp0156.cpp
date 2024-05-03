#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        long long b,p,count=0;
        cin >> b >> p;
        long long q;
        if (b < p){
            q=b;
            for (long long i=1;i<=q;i++) {
                if((i*i)%p == 1) count++;
            }
        } 
		else{ //b>=p
            q=p;
            for (long long i=1;i<=q;i++) {
                if((i*i)%p == 1) count++;
            }
        }
        if(q==b) cout<<count<<endl;
        else{
            count*=b/p; /* chia b thanh cac phan bang nhau co do dai p 
			va moi phan nhu vay se co cung so luong nghiem voi nhau*/
            q=b%p; /*phan tu nho tu b%p ma chung ta can xu li rieng*/
            for (long long i=1;i<=q;i++) {
                if((i*i)%p == 1) count++;
            }
            cout <<count<<endl;
        }
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        vector<int> A(n);
        for(int i=0; i<n; i++)
            cin >> A[i];
        sort(A.begin(), A.end());
        map<int, int> m;
        for(int i=0; i<n; i++)
            m[A[i]]++;
        int count = 0;
        for(int i=0; i<n; i++) {
            m[A[i]]--;
            for(int j=k-1; j>=0; j--)
                count += m[A[i]-j];
        }
        cout << count << endl;
    }
    return 0;
}

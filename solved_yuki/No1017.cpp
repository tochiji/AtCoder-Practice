#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N) cin >> A[i];
    int C = min(N,22);
    vector<vector<int>> sum(C*150000,vector<int>());

    rep(b,1<<C){
        int tmpsum = 0;
        rep(i,C) if(b&(1<<i)) tmpsum += A[i];
        sum[tmpsum].push_back(b);
    }

    int minSum = C;
    for(auto e:sum) {
        if(e.size() >= 2) {
            cout << "Yes" << endl;
            int b0 = e[0];
            int b1 = e[1];
            rep(i,N){
                if(i>=C) {
                    cout << 0 << " ";
                    continue;
                }
                if(b0&(1<<i)) cout << A[i] << " ";
                else if(b1&(1<<i)) cout << -1*A[i] << " ";
                else cout << 0 << " ";
            }
            cout << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
vector<vector<ll>> kn(10, vector<ll>());

void dfs(int keta) {
    for (auto e : kn[keta - 1]) {
        if (e % 10 == 0) {
            kn[keta].push_back(e * 10 + 0);
            kn[keta].push_back(e * 10 + 1);
        } else if (e % 10 == 1) {
            kn[keta].push_back(e * 10 + 0);
            kn[keta].push_back(e * 10 + 1);
            kn[keta].push_back(e * 10 + 2);
        } else if (e % 10 == 2) {
            kn[keta].push_back(e * 10 + 1);
            kn[keta].push_back(e * 10 + 2);
            kn[keta].push_back(e * 10 + 3);
        } else if (e % 10 == 3) {
            kn[keta].push_back(e * 10 + 2);
            kn[keta].push_back(e * 10 + 3);
            kn[keta].push_back(e * 10 + 4);
        } else if (e % 10 == 4) {
            kn[keta].push_back(e * 10 + 3);
            kn[keta].push_back(e * 10 + 4);
            kn[keta].push_back(e * 10 + 5);
        } else if (e % 10 == 5) {
            kn[keta].push_back(e * 10 + 4);
            kn[keta].push_back(e * 10 + 5);
            kn[keta].push_back(e * 10 + 6);
        } else if (e % 10 == 6) {
            kn[keta].push_back(e * 10 + 5);
            kn[keta].push_back(e * 10 + 6);
            kn[keta].push_back(e * 10 + 7);
        } else if (e % 10 == 7) {
            kn[keta].push_back(e * 10 + 6);
            kn[keta].push_back(e * 10 + 7);
            kn[keta].push_back(e * 10 + 8);
        } else if (e % 10 == 8) {
            kn[keta].push_back(e * 10 + 7);
            kn[keta].push_back(e * 10 + 8);
            kn[keta].push_back(e * 10 + 9);
        } else if (e % 10 == 9) {
            kn[keta].push_back(e * 10 + 8);
            kn[keta].push_back(e * 10 + 9);
        }
    }
}

int main() {
    int K;
    cin >> K;
    kn[0] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 1; i <= 9; i++) {
        dfs(i);
    }
    vector<int> cnt(10);
    rep(i,10) cnt[i] = kn[i].size();
    rep(i,10) {
        if(K > cnt[i]){
            K-=cnt[i];
        } else {
            cout << kn[i][K-1] << endl;
            return 0;
        }
    }
}

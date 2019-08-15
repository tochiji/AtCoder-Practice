#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N + 1);
    rep(i,N)
        cin >> A[i+1];

    vector<bool> ball(N + 1, 0);
    vector<int> ans;

    for (int i = N; i >= 1; i--) {
        int mod = 0;
        for (int k = i * 2; k <= N; k += i) {
            mod ^= ball[k];
        }
        if (A[i] != mod) {
            ball[i] = 1;
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;
    for (auto& e:ans) {
        cout << e << " ";
    }
    if(ans.size() !=0) cout << endl;
}
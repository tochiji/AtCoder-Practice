#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> jobs(M + 1);
    rep(_, N) {
        int A, B;
        cin >> A >> B;
        if (A > M) continue;
        jobs[A].push_back(B);
    }

    priority_queue<int> pq;
    ll ans = 0;
    for (int d = 1; d <= M; d++) {
        for (auto e : jobs[d]) {
            pq.push(e);
        }
      if(!pq.empty()){
        int m = pq.top();
        pq.pop();
        ans += m;
      }
    }

    cout << ans << endl;
}
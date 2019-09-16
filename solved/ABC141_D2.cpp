#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    priority_queue<int> pq;
    rep(i, N) {
        int a;
        cin >> a;
        pq.push(a);
    }

    rep(i, M) {
        int a = pq.top();
        pq.pop();
        pq.push(a / 2);
    }

    ll ans = 0;
    rep(i, N) {
        int a = pq.top();
        pq.pop();
        ans += a;
    }
    cout << ans << endl;
    return 0;
}
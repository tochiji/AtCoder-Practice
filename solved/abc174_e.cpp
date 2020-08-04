#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N, K;
    cin >> N >> K;

    vec<int> A(N);
    rep(i, N) cin >> A[i];
    sort(all(A), greater<int>());

    function<bool(int)> isOK = [&](int test_num) {
        int zan = K;
        rep(i, N) {
            if (A[i] > test_num) { zan -= (A[i] / test_num);}
            if (zan < 0) return false;
        }
        return true;
    };

    function<int()> nibutan = [&]() {
        int ng = 0;
        int ok = A[0];

        while (abs(ok - ng) > 1) {
            int mid = (ok + ng) / 2;

            if (isOK(mid)) ok = mid;
            else
                ng = mid;
        }
        return ok;
    };
    cout << nibutan() << endl;
}

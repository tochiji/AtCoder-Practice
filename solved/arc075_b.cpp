#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vec<int> h(N);
    rep(i, N) cin >> h[i];
    sort(all(h),greater<int>());

    function<bool(int)> isOK = [&](int test_num) {
        int C = A-B;
        int BASE = B*test_num;
        int Count = test_num;
        rep(i,N){
            if(h[i] <= BASE) continue;
            Count-=(h[i]-BASE+C-1)/C;
            if(Count < 0) return false;
        }
        return true;
    };

    function<int()> nibutan = [&]() {
        int ng = 0;
        int ok = (h[0]/B)+1;

        /* ok と ng のどちらが大きいかわからないことを考慮 */
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

#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N, Q;
    cin >> N >> Q;
    vec<int> Kmax(2 * 1e5, -1);
    vec<multiset<int>> KRates(2 * 1e5);    // 各幼稚園に存在するレートの集合
    multiset<int> Kmaxs;
    vec<pair<int, int>> Enji(N);    //園児のレート、及び所属する幼稚園
    rep(i, N) {
        cin >> Enji[i].first >> Enji[i].second;
        --Enji[i].second;
        int rate   = Enji[i].first;
        int kd_i   = Enji[i].second;
        Kmax[kd_i] = max(Kmax[kd_i], rate);
        KRates[kd_i].insert(rate);
    }

    rep(i, 2 * 1e5) {
        if (Kmax[i] != -1) Kmaxs.insert(Kmax[i]);
    }

    rep(_, Q) {
        int enji_i, kd_next_i;
        cin >> enji_i >> kd_next_i;
        --enji_i, --kd_next_i;

        int rate = Enji[enji_i].first;
        int kd_i = Enji[enji_i].second;
        Enji[enji_i].second = kd_next_i;

        auto it = Kmaxs.find(Kmax[kd_i]);
        if (it != Kmaxs.end()) Kmaxs.erase(it);

        auto it2 = Kmaxs.find(Kmax[kd_next_i]);
        if (it2 != Kmaxs.end()) Kmaxs.erase(it2);

        auto it3 = KRates[kd_i].find(rate);
        if (it3 != Kmaxs.end()) KRates[kd_i].erase(it3);

        if (KRates[kd_i].empty()) {
            Kmax[kd_i] = -1;
        } else {
            Kmax[kd_i] = *KRates[kd_i].rbegin();
        }

        KRates[kd_next_i].insert(rate);
        Kmax[kd_next_i] = *KRates[kd_next_i].rbegin();

        if (Kmax[kd_i] != -1) Kmaxs.insert(Kmax[kd_i]);
        if (Kmax[kd_next_i] != -1) Kmaxs.insert(Kmax[kd_next_i]);

        cout << *Kmaxs.begin() << endl;
    }
}

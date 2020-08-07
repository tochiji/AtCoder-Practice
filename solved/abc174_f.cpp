#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

template <typename T>
struct BIT
{
    int n;
    vector<T> bit;
    BIT(int n_) : n(n_ + 1), bit(n, 0)
    {
    }

    void add(int i, T x)
    {
        if (i == 0)
        {
            cout << "BIT add ERROR" << endl;
            exit(1);
        }
        for (int idx = i; idx < n; idx += (idx & -idx))
        {
            bit[idx] += x;
        }
    }

    T sum(int i)
    {
        T s(0);

        for (int idx = i; idx > 0; idx -= (idx & -idx))
        {
            s += bit[idx];
        }
        return s;
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, Q;
    cin >> N >> Q;

    vec<int> mp(N + 1);
    vec<int> ball(N + 1);

    rep(i, N)
    {
        int c;
        cin >> c;
        int now = i + 1;
        if (mp[c] == 0)
        {
            mp[c] = now;
        }
        else
        {
            ball[mp[c]] = now;
            mp[c] = now;
        }
    }

    vec<vec<pair<int, int>>> query(N + 1);
    vec<int> l(Q), r(Q);
    rep(i, Q)
    {
        cin >> l[i] >> r[i];
        query[l[i]].push_back({r[i], i});
    }

    BIT<ll> bit(N);
    vec<int> ans(Q);
    for (int i = N; i > 0; --i)
    {
        if (ball[i] != 0)
            bit.add(ball[i], 1);
        for (auto [R, index] : query[i])
        {
            ans[index] = bit.sum(R);
        }
    }

    rep(i, Q)
    {
        cout << r[i] - l[i] + 1 - ans[i] << "\n";
    }
}

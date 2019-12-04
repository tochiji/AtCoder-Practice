#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    int index;
    int count;

    bool operator<(const P &another) const {
        if (count == another.count)
            return index < another.index;
        else
            return count > another.count;
    };
};

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    vector<P> left(100000,{0,0});
    vector<P> right(100000,{0,0});

    rep(i, N) {
        cin >> v[i];
    }

    rep(i, N) {
        int V = v[i];
        if (i % 2 == 0) {
            left[V].index = V;
            left[V].count++;
        } else {
            right[V].index = V;
            right[V].count++;
        }
    }
    sort(all(left));
    sort(all(right));

    if (left[0].index == right[0].index) {
        int mn1 = N - left[0].count - right[1].count;
        int mn2 = N - left[1].count - right[0].count;
        cout << min(mn1, mn2) << endl;
    } else {
        cout << N - left[0].count - right[0].count << endl;
    }
}
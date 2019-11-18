#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> p(N);
    rep(i, N) cin >> p[i];
		sort(all(p));
		p[N-1] = p[N-1]/2;
		cout << accumulate(all(p),0) << endl;
}
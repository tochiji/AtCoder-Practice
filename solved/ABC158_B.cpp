#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;
	ll cnt = N/(A+B);
    ll amari = N%(A+B);
	cout << cnt*A + min(A,amari) << endl;
}
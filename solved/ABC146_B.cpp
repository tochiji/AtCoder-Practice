#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    N = N % 26;
    string S;
    cin >> S;
    string AL = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (auto e : S) {
        int index = AL.find(e);
        index += N;
        if (index >= 26) index = index - 26;
        cout << AL[index];
    }
    cout << endl;
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int D, N;
    cin >> D >> N;

    int i     = 0;
    int count = 0;
    while (count<N) {
        i++;
        int now     = i;
        int waru100 = 0;
        while (now % 100 == 0) {
            now /= 100;
            waru100++;
        }
        if (waru100 == D) count++;
    }
    cout << i << endl;
}
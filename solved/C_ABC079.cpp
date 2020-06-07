#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    int A = N/1000, B = (N/100)%10, C = (N/10)%10, D = N%10;

    if (A + B + C + D == 7) printf("%d+%d+%d+%d=7\n", A, B, C, D);
    else if (A + B + C - D == 7) printf("%d+%d+%d-%d=7\n", A, B, C, D);
    else if (A + B - C + D == 7) printf("%d+%d-%d+%d=7\n", A, B, C, D);
    else if (A - B + C + D == 7) printf("%d-%d+%d+%d=7\n", A, B, C, D);
    else if (A + B - C - D == 7) printf("%d+%d-%d-%d=7\n", A, B, C, D);
    else if (A - B - C + D == 7) printf("%d-%d-%d+%d=7\n", A, B, C, D);
    else if (A - B + C - D == 7) printf("%d-%d+%d-%d=7\n", A, B, C, D);
    else if (A - B - C - D == 7) printf("%d-%d-%d-%d=7\n", A, B, C, D);
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    if((B-A)%2 == 0){
      cout << "Alice" << endl;
    } else {
      cout << "Borys" << endl;
    }
}
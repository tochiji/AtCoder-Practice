#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    string b;
    cin >> b;
    if(b == "A"){
      cout << "T" << endl;
    } else if(b=="T"){
        cout << "A" << endl;
    } else if (b == "C") {
        cout << "G" << endl;
    } else if (b == "G") {
        cout << "C" << endl;
    }
}
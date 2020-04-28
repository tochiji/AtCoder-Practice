#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int H, W;
    cin >> H >> W;
    vec<string> s(H);
    rep(i, H) cin >> s[i];

    rep(i, H) rep(j,W){
        if(s[i][j] == '#'){
            bool flag = false;
            if(i != 0 && s[i-1][j] == '#') flag = true;
            if(i != H-1 && s[i+1][j] == '#') flag = true;
            if(j != 0 && s[i][j-1] == '#') flag = true;
            if(j != W-1 && s[i][j+1] == '#') flag = true;

            if(!flag){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}

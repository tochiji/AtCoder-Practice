#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    vector<vector<int>> RGB(3, vector<int>());
    map<int, int> Bmap;
    rep(i, N) {
        if (S[i] == 'R') {
            RGB[0].push_back(i);
        } else if (S[i] == 'G') {
            RGB[1].push_back(i);
        } else if (S[i] == 'B') {
            RGB[2].push_back(i);
            Bmap[i] = 1;
        }
    }
    ll Rc  = RGB[0].size();
    ll Gc  = RGB[1].size();
    ll Bc  = RGB[2].size();
    ll ans = (Rc * Gc * Bc);

    ll count = 0;
    rep(i,N){
        char X = S[i];
        for(int j=1;i+j*2<N;++j){
            char Y = S[i+j];
            char Z = S[i+j*2];
            if(X != Y && X!=Z && Y!=Z) ++count;
        }
    }
    cout << ans-count << endl;
}

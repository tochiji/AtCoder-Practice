#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vector<int> l(Q);
    vector<int> r(Q);
    rep(i, Q) cin >> l[i] >> r[i];
    vector<int> roll(N);
    roll[0] = 0;
    for(int i=1;i<N;i++){
        bool isA = S[i - 1] == 'A';
        bool isC = S[i] == 'C';
        if(isA&&isC){
          roll[i] = roll[i-1]+1;
        }else {
          roll[i] = roll[i-1];
        }
    }

    rep(i,Q){
        int li = l[i] - 1;
        int ri = r[i] - 1;
        cout << roll[ri] - roll[li] << endl;
    }
}
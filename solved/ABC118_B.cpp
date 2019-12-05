#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> Food(M,0);
    rep(i,N){
        int K;cin >> K;
        rep(j,K){
            int A;cin>>A;
            A--;
            Food[A]++;
        }
    }

    int ans = 0;
    rep(i,M){
        if(Food[i] == N)ans++;
    }
    cout << ans << endl;
}
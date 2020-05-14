#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    ll N,K;
    cin >> N >> K;
    vec<int> A(N);
    rep(i,N) {
        cin >> A[i];
        --A[i];
    }
    if(K<=N){
        int now = 0;
        rep(i,K){
            now = A[now];
        }
        cout << now+1 << endl;
        return 0;
    }
    vec<int> visited(N,0);
    int now = 0;
    int roop = 0;
    int roop1 = 1e9;
    while(true){
        if(visited[now] == 1) roop1=min(roop1,roop);
        if(visited[now] == 2) break;
        ++visited[now];
        now = A[now];
        ++roop;
    }
    K = (K-roop1)%(roop-roop1);

    now = 0;
    rep(i,roop1+K){

        now = A[now];
    }
    cout << now+1 << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P  = pair<int, int>;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N - 1));
    rep(i, N) {
        rep(j, N - 1) {
            cin >> A[i][j];
            --A[i][j];
        }
        reverse(A[i].begin(), A[i].end());
    }
    vector<P> q;
    auto check = [&](int i) {
        if (A[i].size() == 0) return;
        int j = A[i].back();
        if(A[j].back() == i){
            P p(i,j);
            if(p.second < p.first) swap(p.first,p.second);
            q.push_back(P(i,j));
        }
    };
    rep(i, N) {
        check(i);
    }
    int day = 0;
    while(q.size()>0){
        day++;
        sort(all(q));
        q.erase(unique(all(q),q.end()));
        vector<P> prevQ;
        swap(prevQ,q);
        for(P p:prevQ){
            int i = p.first, j = p.second;
            A[i].pop_back();
            A[j].pop_back();
        }
        for(P p:prevQ){
            int i = p.first, j = p.second;
            check(i);
            check(j);
        }
    }
    rep(i,N){
        if(A[i].size() != 0){
            cout << -1 << endl;
            return 0;
        }
    }
    cout << day << endl;
}
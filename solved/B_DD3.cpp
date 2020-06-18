#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int N;
vec<string> ans;
vec<string> P,Q;

void dfs(string s) {
    if (s.size() == N) {
        ans.push_back(s);
        return;
    }

    for(int i=1;i<=N;++i) {
        bool flag = true;
        for (auto e : s)
            if (e == (i + '0')) flag = false;
        if (!flag) continue;
        s += to_string(i);
        dfs(s);
        s.pop_back();
    }
};


int main() {
    cin >> N;
    P.resize(N);
    Q.resize(N);
    rep(i,N) cin >> P[i];
    rep(i,N) cin >> Q[i];

    string Ps = "";
    string Qs = "";
    for(auto e:P) Ps+=e;
    for(auto e:Q) Qs+=e;

    dfs("");
    sort(all(ans));

    int ansP,ansQ;
    rep(i,ans.size()){
        if(ans[i]==Ps) ansP=i+1;
        if(ans[i]==Qs) ansQ=i+1;
    }
    cout << abs(ansP-ansQ) << endl;

}
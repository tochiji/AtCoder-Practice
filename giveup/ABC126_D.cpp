#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct distination {
    int from;
    int to;
    int distance;
};

int N;
vector<vector<distination>> G;
vector<int> D;

int main() {
    cin >> N;
    G.resize(N);
    rep(i, N) {
        int from, to, distance;
        cin >> from >> to >> distance;
        from--;
        to--;
        distance = (distance % 2 == 1) ? 1 : 0;
        G[from].push_back({from, to, distance});
        G[to].push_back({to, from, distance});
    }
    D.resize(N, -1);
    D[0] = 0;

    queue<distination> Q;
    for(auto e:G[0]) Q.push(e);
    while(!Q.empty()){
      distination d = Q.front();
      Q.pop();
      if(D[d.to] != -1) continue;
      D[d.to] = (D[d.from] + d.distance) % 2;
      for(auto e:G[d.to]) Q.push(e);
    }

    for(auto e:D){
      cout << e << endl;
    }
}
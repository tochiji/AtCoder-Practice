// https://atcoder.jp/contests/abc087/tasks/arc090_b Line People
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
struct ToDist{
    int to;
    int distance;
};
const int MINIMUM = -2001;
int N, M;
vector<vector<ToDist>> G;
vector<int> Nums;
bool flag = true;

void dfs(int now){
    if(Nums[now] == MINIMUM) Nums[now] = 0;
    for(auto e:G[now]){
        int to = e.to;
        int distance = e.distance;

        if(Nums[to] == MINIMUM){
            Nums[to] = Nums[now] + distance;
            dfs(to);
        } else if(Nums[to] != Nums[now] + distance){
            flag = false;
        }
    }
}

int main() {

    cin >> N >> M;
    G.resize(N);
    Nums.assign(N,MINIMUM);

    rep(i,M){
        int from,to,distance;
        cin >> from >> to >> distance;
        from--;to--;
        G[from].push_back({to,distance});
        G[to].push_back({from,distance*-1});
    }

    for(int i=0;i<N;i++){
        if(flag == false) break;
        else if(Nums[i] == MINIMUM) dfs(i);
    }

    cout <<  (flag ? "Yes" : "No") << endl;

}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct distination {
    int to;
    int distance;
};

int N, M, L, Q;
vector<vector<distination>> G;

int dfs(int s, int t, int tank, int count, string passed){
	// printf("%d %d %d %d %s \n",s,t,tank,count,passed.c_str());
	passed[s] = '1';
	if(s == t) return count;
	int mn = 1e9;
	for(auto e:G[s]){
		if(passed[e.to] == '1') continue;
		if(e.distance > L) continue;
		if(e.distance > tank){
			count++;
			tank = L;
		}
		int result = dfs(e.to,t,tank-e.distance,count,passed);
		// printf("%d\n",result);
		if(result>=0) mn = min(mn,result);
	}
	return mn;
}

int main() {
    cin >> N >> M >> L;

    G.resize(N);
    rep(i, M) {
        int from, to, distance;
        cin >> from >> to >> distance;
        from--;
        to--;
        G[from].push_back({to, distance});
        G[to].push_back({from, distance});
    }

		cin >> Q;

		rep(i,Q){
			int s,t;
			cin >> s >> t;
			s--;t--;
			string passed = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
			int result = dfs(s,t,L,0,passed);
			// printf("%d\n",result);
			if(result == 1e9){
				cout << -1 << endl;
			} else {
				cout << result << endl;
			}
		}
}
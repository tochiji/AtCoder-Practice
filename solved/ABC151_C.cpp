#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> p(M);
    vector<string> S(M);
    rep(i, M){
			int P;
			string s;
			cin >> P >> s;
			P--;
			p[i] = P;
			S[i] = s;
		}

    vector<bool> acs(N, false);
    vector<int> wans(N, 0);

    rep(i, M) {
        if (!acs[p[i]] && S[i] == "WA") {
            wans[p[i]]++;
        } else if (!acs[p[i]] && S[i] == "AC") {
            acs[p[i]] = true;
        }
    }

    int a = 0;
    int w = 0;
    rep(i, N) {
        if (acs[i]) {
            a++;
            w += wans[i];
        }
    }
    cout << a << " " << w << endl;
}
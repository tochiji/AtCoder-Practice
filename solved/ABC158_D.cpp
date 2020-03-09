#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string S;
    int Q;
    cin >> S >> Q;
    bool rev = false;
    deque<char> deq;
	for(auto e:S) deq.push_back(e);
    rep(i, Q) {
        int q = 0;
        cin >> q;
        if (q == 1) {
            rev = !rev;
            continue;
        }
        int F;
        char C;
        cin >> F >> C;
        if (!rev) {
            if (F == 1)
                deq.push_front(C);
            else
                deq.push_back(C);

        } else {
            if (F == 1)
                deq.push_back(C);
            else
                deq.push_front(C);
        }
    }

    if(!rev){
		for(auto e:deq) cout << e;
	} else {
        reverse(all(deq));
		for(auto e:deq) cout << e;
	}
	cout << endl;
}
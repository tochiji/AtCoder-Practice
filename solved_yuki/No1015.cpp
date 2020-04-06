#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    priority_queue<int> A;
    rep(i, N) {
        int a;
        cin >> a;
        A.push(++a);
    }

    while (!A.empty() && Z > 0) {
        int a = A.top();
        A.pop();
        int maisu = min(max(a/10000,1),Z);
        a-=10000*maisu;
        if (a > 0) A.push(a);
        Z-=maisu;
    }

    while (!A.empty() && Y > 0) {
        int a = A.top();
        A.pop();
        int maisu = min(max(a/5000,1),Y);
        a-=5000*maisu;
        if (a > 0) A.push(a);
        Y-=maisu;
    }

    while (!A.empty() && X > 0) {
        int a = A.top();
        A.pop();
        int maisu = min(max(a/1000,1),X);
        a-=1000*maisu;
        if (a > 0) A.push(a);
        X-=maisu;
    }

    if(A.empty()) cout << "Yes" << endl;
    else cout << "No" << endl;
}
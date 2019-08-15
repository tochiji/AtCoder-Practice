#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    int N;
    cin >> N;
    vector<Point> Points(N);
    vector<int> dists;
    rep(i, N) cin >> Points[i].x >> Points[i].y;

    rep(i, N) rep(j, i) {
        int dist = pow(Points[i].x - Points[j].x, 2)
                   + pow(Points[i].y - Points[j].y, 2);
        dists.push_back(dist);
    }
    sort(dists.begin(),dists.end());

    cout << fixed << setprecision(7) << (double)sqrt(dists[dists.size()-1]) << endl;
}
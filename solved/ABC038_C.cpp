#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using namespace std;

struct wh {
    int w;
    int h;
    bool operator<(const wh &another) const {
        if (w == another.w)
            return h > another.h;
        else
            return w < another.w;
    };
};

int main() {
    int N;
    cin >> N;
    vector<wh> box(N);
    rep(i, N) cin >> box[i].w >> box[i].h;
    sort(all(box));

    vector<int> LIS;
    LIS.push_back(box[0].h);
    rep(i,N){
      int index = lower_bound(all(LIS),box[i].h) - LIS.begin();
      if(LIS[index] < box[i].h){
        LIS.push_back(box[i].h);
      }else if(LIS[index] > box[i].h){
        LIS[index] = box[i].h;
      }
    }
    cout << LIS.size() << endl;
}
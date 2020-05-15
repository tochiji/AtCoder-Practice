#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

struct P {
    int h;
    int w;
    int c;
};

int main() {
    int H,W;
    cin >> H >> W;
    vec<string> s(H);
    rep(i,H) cin >>s[i];
    int dot = 0;
    rep(i,H)rep(j,W){
        if(s[i][j]=='.') ++dot;
    }
    queue<P> q;
    q.push({0,0,1});
    s[0][0] = '#';

    while(!q.empty()){
        int h = q.front().h;
        int w = q.front().w;
        int c = q.front().c;
        if(h==H-1&&w==W-1){
            cout << dot - c << endl;
            return 0;
        }
        q.pop();
        if(h>0&&s[h-1][w]=='.'){
            q.push({h-1,w,c+1});
            s[h-1][w] = '#';
        }
        if(w>0&&s[h][w-1]=='.'){
            q.push({h,w-1,c+1});
            s[h][w-1] = '#';
        }
        if(h<H-1&&s[h+1][w]=='.'){
            q.push({h+1,w,c+1});
            s[h+1][w] = '#';
        }
        if(w<W-1&&s[h][w+1]=='.'){
            q.push({h,w+1,c+1});
            s[h][w+1] = '#';
        }
    }
    cout << -1 << endl;
}
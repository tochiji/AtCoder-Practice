#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;    
    vector<vector<int>> RGB(3,vector<int>());
    rep(i,N) {
        if(S[i] == 'R'){
            RGB[0].push_back(i);
        } else if(S[i] == 'G') {
            RGB[1].push_back(i);
        }
        else if(S[i] == 'B') RGB[2].push_back(i);
    }

    if(RGB[0].size()==0||RGB[1].size()==0 || RGB[2].size()==0){
        cout << 0 << endl;
        return 0;
    }

    ll ans = 0;
    rep(i,3)rep(j,3)rep(k,3){
        if(i==j||j==k||k==i) continue;
        int x,y,z;

        for(int i2=0;i2<RGB[k].size();i2++){
            x = RGB[k][i2];
            int jindex = lower_bound(all(RGB[j]),x) - RGB[j].begin();
            if(jindex>=RGB[j].size()) continue;
            for(int i3=jindex;i3<RGB[j].size();++i3){
                y = RGB[j][i3];
                int iindex = lower_bound(all(RGB[i]),y) - RGB[i].begin();
                if(iindex>= RGB[i].size()) continue;
                int outnum = y+(y-x);
                if(outnum>N){
                    ans+=(RGB[i].size()-iindex);
                    continue;
                }
                int outindex =  lower_bound(all(RGB[i]),outnum) - RGB[i].begin();
                if(outindex >= RGB[i].size()){
                    ans+=(RGB[i].size()-iindex);
                } else {
                    if(RGB[i][outindex] == outnum) ans+=(RGB[i].size()-iindex-1);
                    else ans+=(RGB[i].size()-iindex);
                }
            }
        }
    }
    cout << ans << endl;
}

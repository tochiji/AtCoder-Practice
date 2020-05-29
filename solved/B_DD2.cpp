#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;


int main() {
    int N;
    string S;
    cin >> N >> S;
    
    int ans = 0;
    rep(i,1000){
        string s = to_string(i);
        if(s.size()==1) s="00"+s;
        else if(s.size()==2) s="0"+s;
        int index = 0;
        for(auto e:S){
            if(s[index] == e) {
                ++index;
            }
            if(index==3) {
                ++ans;
                break;
            }
        }
    }
    cout << ans << endl;
}
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
    function<void(string)> dfs = [&](string s) {
        if(s.size()==3){
            int index = 0;
            for(auto e:S){
                if(e==s[index]) ++index;
                if(index==3){
                    ++ans;
                    break;
                }
            }
        } else {
            rep(i,10) dfs(s+to_string(i));
        }
    };
    dfs("");
    cout << ans << endl;
}
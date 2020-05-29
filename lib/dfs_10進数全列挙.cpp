#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    string S = "123456789";
    int ans = 0;

    // 000〜999までの1000個の文字列を全列挙
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
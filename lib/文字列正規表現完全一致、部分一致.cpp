#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {

    // 「正規表現完全一致」は、regex_match！
    string S = "hihihihihi";    
    bool m = regex_match(S, regex("(hi)+"));
    cout << (m?"Yes":"No") << endl; // Yes
    


    S = "hihih";    
    m = regex_match(S, regex("(hi)+"));
    cout << (m?"Yes":"No") << endl; // No




    // 「正規表現部分一致」は、regex_serach！
    string s = "hihihihihi";    
    bool c = regex_search(s, regex("(hi)+"));
    cout << (c?"Yes":"No") << endl; // Yes
    

    
    s = "hihih";
    c = regex_search(s, regex("(hi)+"));
    cout << (c?"Yes":"No") << endl; // Yes ←これがYesになる！
}
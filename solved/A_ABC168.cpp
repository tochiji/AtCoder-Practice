#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    string N;
    cin >> N;
    char c = N[N.size()-1];
    if(c == '3'){
        cout << "bon" << endl;
    } else if(c=='0'|| c=='1'||c=='6'|| c=='8'){
        cout << "pon" << endl;
    } else {
        cout << "hon" << endl;
    }
}

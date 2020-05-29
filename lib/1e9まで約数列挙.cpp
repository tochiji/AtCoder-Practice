#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
template <typename T>
using vec = std::vector<T>;


// 計算量 O(√N)
template <typename T>
vec<T> divisors(T N){
    vec<T> divs;
    for(T i=1;i*i<=N;++i){
        if(N%i == 0) {
            divs.push_back(i);
            if(N/i != i) divs.push_back(N/i);
        }
    }
    sort(divs.begin(),divs.end());
    return divs;
}

int main() {
    ll N = 105; 
    vec<ll> divs = divisors(N);
    
    //約数の数
    cout << divs.size() << endl;

    //約数列挙
    for(auto e:divs) cout << e << " ";
    cout << endl;
}
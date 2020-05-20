#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

// 度数（°）をラジアン（π）へ
// 度数をラジアンに変換することで、cos(rad)など三角関数が使えるようになるよ
double deg_to_rad(double degree){
    double pi = acos(-1);
    double rad = pi*degree/180;
    return rad;
}

int main() {
    double A,B;
    double H,M;
    cin >> A >> B >> H >> M;
    double S = H*30.0+M*30/60;
    double L = M*6;
    double degree = abs(S-L);
    double rad = deg_to_rad(degree);
    double ans = A*A+B*B-2*A*B*cos(rad);
 
    cout << sqrt(ans) << endl;
}
#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

double deg_to_rad(double degree){
    double pi = acos(-1);
    double rad = pi*degree/180;
    return rad;
}

int main() {
    double A,B,H,M;
    cin >> A >> B >> H >> M;
    double Hdeg = H*30 + M/2;
    double Mdeg = M*6;
    double diff = abs(Hdeg-Mdeg);
    double rad = deg_to_rad(diff);
    cout << fixed << setprecision(15);
    cout << (double)sqrt(A*A+B*B-2*A*B*cos(rad)) << endl;
}
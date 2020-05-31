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
    
    double degH = H*30 + M/2;
    double degM = M*6;
    double diff = abs(degH-degM);
    double rad = deg_to_rad(diff);

    cout << fixed << setprecision(15);
    cout << sqrt(A*A+B*B-2*A*B*cos(rad)) << endl;
}
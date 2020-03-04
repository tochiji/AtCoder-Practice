#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int X;
    cin >> X;
    vector<int> x(100200,0);
    x[0] = 1;
    rep(i,X+1){
        if(x[i] == 1){
            x[i+100] = 1;
            x[i+101] = 1;
            x[i+102] = 1;
            x[i+103] = 1;
            x[i+104] = 1;
            x[i+105] = 1;
        }
    }
    cout << (x[X]?"1":"0") << endl;
}
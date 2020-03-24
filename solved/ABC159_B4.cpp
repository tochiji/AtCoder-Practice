#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

bool f(string s) {
    string rs = s;
    reverse(all(rs));
    return s == rs;
}

int main() {
    string S;
    cin >> S;
    int N = S.size();
    string S2 = S.substr(0,(N-1)/2);
    string S3 = S.substr((N+3)/2-1);
    
    cout << (f(S)&&f(S2)&&f(S3)?"Yes":"No") << endl;
}
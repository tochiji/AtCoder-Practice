#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    string S;
    cin >> S;
    bool A = S[0] == 'A';
    int Cs = S.find("C");
    int Ce = S.rfind("C");
    bool C1    = (Cs == Ce);
    bool C2    = (Cs >= 2) && (Cs <= S.size() - 2);
    bool C     = (C1 && C2);
    bool small = true;
    for(int i=1;i<S.size();i++){
        if (i == Cs) continue;
        if(!islower(S[i]))small = false;
    }
    if(A&&C&&small){
      cout << "AC" << endl;
    } else {
      cout << "WA" << endl;
    }
}
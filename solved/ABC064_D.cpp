#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int left = 0;
    int right = 0;
    int ansl = 0;
    int ansr = 0;

    rep(i,N){
      if(S[i] == '(') left++;
      else left--;
      if(left == -1){
        ansl++;left=0;
      }
    }
    rep(i, N) {
        if (S[N-1-i] == ')') right++;
        else right--;
        if (right == -1) {
            ansr++;right = 0;
        }
    }

    cout << string(ansl,'(') + S + string(ansr,')') << endl;
}
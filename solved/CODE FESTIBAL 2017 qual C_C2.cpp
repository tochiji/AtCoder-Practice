#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    double center = (double)s.size()/2;
    int ans = 0;
    int left = 0;
    int right = s.size() -1;

    while(left<right){
        if(s[left] == s[right]){
            left++;right--;
            continue;
        }
        if(s[left] == 'x'){
            ans++;
            left++;
            continue;
        }
        if(s[right] == 'x'){
            ans++;
            right--;
            continue;
        }
        if(s[left] != s[right]){
            cout << -1 << endl;
            return 0; 
        }
    }
    cout << ans << endl;
}
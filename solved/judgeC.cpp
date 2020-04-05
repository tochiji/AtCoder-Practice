#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int sum = a1 + a2 + a3;
    vector<int> v(sum);
    iota(v.begin(), v.end(), 1);
    int ans = 0;
    do {
        bool flag = true;
        for(int i=0;i<a1-1;i++)if(v[i+1]<v[i]) flag = false;

        for(int i=a1;i<a1+a2;i++)if(v[i]<v[i-a1]) flag = false;
        for(int i=a1;i<a1+a2-1;i++)if(v[i+1]<v[i]) flag = false;

        for(int i=a1+a2;i<a1+a2+a3;i++)if(v[i]<v[i-a2]) flag = false;
        for(int i=a1+a2;i<a1+a2+a3-1;i++)if(v[i+1]<v[i]) flag = false;

        if(flag) ++ans;
    } while (next_permutation(v.begin(), v.end()));

    cout << ans << endl;
}
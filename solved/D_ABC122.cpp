#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

const ll MOD = 1000000007;
int N;
int dp[105][4][4][4];

int dfs(int now,int a,int b, int c){
    if(dp[now][a][b][c]) return dp[now][a][b][c];
    if(now == N) {
        dp[now][a][b][c] = 1;
        return 1;
    }
    int tmp = 0;
    for(int d=0;d<=3;++d){
        if(a==0&&b==2&&c==1) continue; //AGC?;
        if(a==0&&b==1&&c==2) continue; //ACG?;
        if(a==2&&b==0&&c==1) continue; //GAC?;

        if(b==0&&c==2&&d==1) continue; //?AGC;
        if(b==0&&c==1&&d==2) continue; //?ACG;
        if(b==2&&c==0&&d==1) continue; //?GAC;

        if(a==0&&b==2&&d==1) continue; //AG?C;
        if(a==0&&c==2&&d==1) continue; //A?GC;

        tmp += dfs(now+1,b,c,d);
        tmp %=MOD;
    }
    dp[now][a][b][c] = tmp;
    return tmp;
}

int main() {
    cin >> N;
    cout << dfs(0,3,3,3) << endl;
}
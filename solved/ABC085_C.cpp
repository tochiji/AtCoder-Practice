#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    int maxman = Y/10000;
    int maxgosen = Y/5000;

    for (int man = 0; man <= maxman; man++) {
        for (int gosen = 0; gosen <= maxgosen; gosen++) {
            int sen = N - gosen - man;
            if(sen<0) break;
            if (man * 10000 + gosen * 5000 + sen * 1000 == Y) {
                printf("%d %d %d\n", man, gosen, sen);
                return 0;
            }
        }
    }
    printf("-1 -1 -1\n");
}
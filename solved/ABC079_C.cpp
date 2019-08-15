#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

bool flag = false;
string ABCD;

void dfs(int count, string op) {
    if (flag == true) return;
    if (count == 3) {
        int sum = 0;
        sum += stoi(ABCD.substr(0, 1));

        string output = ABCD.substr(0, 1);

        rep(i, op.length()) {
            string s = ABCD.substr(i + 1, 1);
            if (op[i] == '+') {
                sum += stoi(s);
                output = output + "+" + s;
            }
            else {
                sum -= stoi(s);
                output = output + "-" + s;
            }
        }
        if (sum == 7) {
            cout << output + "=7" << endl;
            flag = true;
        }
        return;
    }

    count += 1;
    dfs(count, op + "+");
    dfs(count, op + "-");
}

int main() {
    cin >> ABCD;
    dfs(0, "");
}
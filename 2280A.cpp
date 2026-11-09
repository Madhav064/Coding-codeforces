
#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k, vector<int>& a, vector<int>& b) {

    int cntA = 0;
    int cntB = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != k % 2) {
            cntA++;
        }

        if (b[i] % 2 != k % 2) {
            cntB++;
        }
    }

    if (cntB <= cntA) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        solve(n, k, a, b);
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        int n = x + y + z;

        if (x >= y) {
            cout << string(n, 'P') << '\n';
        }
        else if (y >= z) {
            cout << string(n, 'R') << '\n';
        }
        else {
            cout << string(n, 'S') << '\n';
        }
    }

    return 0;
}
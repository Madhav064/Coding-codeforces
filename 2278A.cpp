#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string p, q;
        cin >> p >> q;

        int cnt[26] = {};

        // Count numerator characters
        for (char c : p) {
            cnt[c - 'a']++;
        }

        // Cancel denominator characters
        for (char c : q) {
            cnt[c - 'a']--;
        }

        // Check whether the remaining expression is "six"
        bool possible = true;

        for (int i = 0; i < 26; i++) {
            int expected = 0;

            if (i == ('s' - 'a') ||
                i == ('i' - 'a') ||
                i == ('x' - 'a')) {
                expected = 1;
            }

            if (cnt[i] != expected) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
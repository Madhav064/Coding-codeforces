
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> v(n);

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v[i] = (1LL << a);
    }

    // Process larger powers of two first
    sort(v.rbegin(), v.rend());

    long long sum1 = 0;
    long long sum2 = 0;

    // Greedily balance the two groups
    for (int i = 0; i < n; i++) {
        if (sum1 <= sum2) {
            sum1 += v[i];
        } else {
            sum2 += v[i];
        }
    }

    cout << sum1 * sum2 << '\n';
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

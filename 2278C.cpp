#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long sum = 0;
    int max_val = 0;
    bool has_internal_ge_2 = false;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
        max_val = max(max_val, a);
        
        // Check if any strictly internal element is >= 2
        if (i > 0 && i < n - 1 && a >= 2) {
            has_internal_ge_2 = true;
        }
    }

    // If all elements are 1, no operations can be performed.
    if (max_val == 1) {
        cout << -1 << "\n";
    } 
    // If we have an internal element >= 2, we can merge everything while preserving
    // mass until only 2 elements remain. The final operation loses exactly 1 mass.
    // The same applies if n == 2, as we only need 1 boundary operation.
    else if (has_internal_ge_2 || n == 2) {
        cout << sum - 1 << "\n";
    } 
    // If all internal elements are 1, we can never perform an internal operation.
    // We are forced to do n-1 boundary operations, each losing exactly 1 mass.
    else {
        cout << sum - (n - 1) << "\n";
    }
}

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
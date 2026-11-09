#include <bits/stdc++.h>
using namespace std;

/*
An array is good if we can make it non-empty and entirely zero.

There are two cases.
Case 1: The array contains a zero
For example, [2, 1, 0, 3].

We can remove positive elements one at a time by choosing each as a subarray of length one. Each positive element is decremented and then removed.

The existing zero remains untouched. Eventually, we're left with [0].

Therefore, any array containing a zero is good.
Case 2: Every element is positive
Suppose the array is [2, 3, 4].

To create a zero, we need to decrement some element repeatedly without removing it. Each operation can decrease that element by one while removing another element from the chosen subarray.

If we choose the smallest element, 2, we need two operations to turn it into zero, and we need another element to remove in each operation.

More generally, if the smallest element is x and the array length is n, we need:
x <= n-1

Equivalently,
min(a) < n

If this condition holds, the entire array is good. If it doesn't, no subsequence can be good either, because every subsequence has length at most n and every element is at least n.
*/

int solve(int n, vector<long long>& nums){
    long long mn = *min_element(nums.begin(), nums.end());

    if (mn == 0 || mn < n) {
        return n;
    }

    return 0;

}


int main(){

	long long t;
	cin >> t;

	for(long long i = 0; i < t; i++){
		long long n;

		cin >> n;
		vector<long long> a(n);

		for(long long j = 0; j < n; j++){
			cin >> a[j];
		}

		int result = solve(n, a);
		cout << result << "\n";
	}

	return 0;

}
#include <bits/stdc++.h>
using namespace std;

int solve(int n , int k, vector<int>& nums){
	//take a frequency array 
	vector<int> freq(n+1, 0);

	//count the frequency of each elemnt in our array
	for(int x : nums){
		if(x <= n) // the max MEX we can get is basically lets say x , so x <= n/k
		{
			freq[x]++;
		}
	}

	int available = 0;

	for(int i = 0; i <= n; i++){
		if(freq[i] == 0){
			return i;
		}
		available += freq[i] - 1;

		if(available < k -1){
			return i;
		}

		available -= k-1;
	}
	return n+1;
}

int main(){

	int t;
	cin >> t;

	for(int i = 0; i < t; i++){
		int n;
		int k;

		cin >> n >> k;
		vector<int> a(n);

		for(int j = 0; j < n; j++){
			cin >> a[j];
		}

		int result = solve(n, k, a);
		cout << result << "\n";
	}

	return 0;

}



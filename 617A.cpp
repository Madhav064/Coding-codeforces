#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;

	int ans = 0;

	for(int i = 5; i >= 1; i--){
			ans += (x/i);
			x%=i;
	}

	cout << ans;
	return 0;
}
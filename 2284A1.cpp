#include <bits/stdc++.h>
using namespace std;


int solve(int ops){
	int base ;
	int height;
	int area ;

	if(ops % 2 == 0){
		base = ops/2;
		height = ops/2;
		area = base * height;
	}else{
		int x = ops - 1;
		height = x/2;
		base = x/2 + 1;
		area = base * height;
	}
	return area;	
}


int main()
{
	int t ;
	cin >> t;

	while(t--){
		int operations;
		cin >> operations;

		cout << solve(operations) << "\n";
	}

	return 0;
}
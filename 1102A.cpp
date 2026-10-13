#include <bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	cin >> n;

	long long x = (n*(n+1))/2 ;

	if(x % 2 == 0) 
		cout << 0 << endl;
	else
		cout << 1 << endl; 

	return 0;
}
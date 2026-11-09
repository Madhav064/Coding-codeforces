#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	int b;
	cin >> a >> b;

	int cnt = 0;

	for(int i =0; ;i++){
		a *= 3;
		b*=2;
		cnt++;
		if(a > b){
			cout << cnt;
			break;
		}
	}
	return 0;
}
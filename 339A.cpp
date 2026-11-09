#include <bits/stdc++.h>
using namespace std;

int main(){

	string s;

	cin >> s;
	int n = s.size();

	std::vector<int> v;

	for(int i =0 ; i < s.size(); i++){
		if(s[i] == '1' || s[i] == '2' || s[i] == '3') v.push_back(s[i] - 48);
	}
	sort(v.begin(), v.end());

	for(int i = 0; i < v.size(); i++){
		cout << v[i] ;
		if(i != v.size() -1) cout << '+'; 
	}

	return 0;
}
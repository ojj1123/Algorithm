#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define TEST int T; cin>>T; for(int i=0;i<T;i++)

int main() {
	FAST;
	string s;
	TEST{
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] == 'Z')
			s[i] = 'A';
		else
			s[i] += 1;
	}
	cout << "String #" << i + 1 << "\n";
	cout << s << "\n\n";
	}
	return 0;
}
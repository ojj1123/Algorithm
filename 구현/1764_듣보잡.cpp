// //1764_듣보잡
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int main() {
// 	int n, m;
// 	cin >> n >> m;
// 	char(*name)[21] = new char[n + m][21];//?
// 	vector<string> a;

// 	for (int i = 0; i < n + m; i++)
// 		cin >> name[i];
// 	for (int i = 0; i < n; i++) {
// 		for (int j = (n + 2) - 1; j < n + m; j++) {
// 			if (!(strncmp(name[i], name[j], 21))) {
// 				a.push_back(name[j]);
// 			}
// 		}
// 	}
// 	cout << a.size() << "\n";
// 	sort(a.begin(), a.end());
// 	for (unsigned int i = 0; i < a.size(); i++)
// 		cout << a[i] << endl;
// 	return 0;
// }
// 시간초과

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	map<string, int> Map;
	vector<string> res;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		Map[temp]++;
	}
	for (int i = 0; i < m; i++)
	{
		string temp;
		cin >> temp;
		if (Map[temp] != 0)
		{
			res.push_back(temp);
		}
	}
	sort(res.begin(), res.end());
	cout << res.size() << "\n";
	for (auto x : res)
	{
		cout << x << "\n";
	}
	return 0;
}
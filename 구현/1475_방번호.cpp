//1475_방번호
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

#define FAST ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ALL(a) ((a).begin(),(a).end())

int main() {
	FAST;
	int total_6_9 = 0, r;
	int cnt[10] = { 0, };
	string num;

	cin >> num;
	for (int i = 0; i < num.length(); i++)
		cnt[num[i] - '0']++;

	total_6_9 += cnt[6] + cnt[9];

	r = total_6_9 / 2;
	r += total_6_9 % 2;
	int mVal;
	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9)
			mVal = -1;
		else if (cnt[i] != 0 && i != 6 && i != 9) {
			mVal = cnt[i];
			break;
		}
	}//0이 아닌 mVal을 찾기 위해(i가 6또는 9는 제외)

	if (mVal < 0)
		mVal = r;
	else {
		for (int i = 0; i < 10; i++) {
			if (!(i == 6 || i == 9) && cnt[i] != 0) {
				mVal = max(mVal, cnt[i]);
			}
		}
	}
	mVal = max(mVal, r);
	cout << mVal << "\n";

	return 0;
}

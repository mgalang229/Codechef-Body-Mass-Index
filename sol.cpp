#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int m, h;
		cin >> m >> h;
		// just check if the body mass index (bmi) of Chef is within
		// the range of specific category
		int bmi = m / (h * h);
		if (bmi <= 18) {
			cout << 1;
		} else if (bmi >= 19 && bmi <= 24) {
			cout << 2;
		} else if (bmi >= 25 && bmi <= 29) {
			cout << 3;
		} else {
			cout << 4;
		}
		cout << '\n';
	}
	return 0;
}

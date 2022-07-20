#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string x;
	int a, b;

	cin >> x >> a >> b;
	while ("#" != x) {
		cout << x << ' ';

		if (17 < a || 80 <= b) {
			cout << "Senior\n";
		}
		else {
			cout << "Junior\n";
		}

		cin >> x >> a >> b;
	}

	return 0;
}
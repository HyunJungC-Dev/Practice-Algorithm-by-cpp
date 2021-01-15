#include <iostream>
using namespace std;

int main() {
	int N, n, max = 0;
	int min = 100;
	// freopen("input.txt", "rt", stdin); rt = reat text option
	cin >> N;
	while (N--) {
		cin >> n;
		if (n > max) {
			max = n;
		}
		if (n < min) {
			min = n;
		}
	}

	cout << max - min;

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int N, M, result = 0;
	cin >> N >> M;
	
	int tmp = M;
	while (tmp <= N) {
		result += tmp;
		tmp += M;
	}
	
	cout << result;

	return 0;
}
#include <iostream>
using namespace std;
// 1. 1���� N���� M�� �����
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
#include <iostream>
using namespace std;
// 1. 1부터 N까지 M의 배수합
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
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "";
	string result = "";
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != 32) {
			if (s[i] >= 65 && s[i] <= 90) {
				s[i] += 32;
				result += s[i];
			}
			else if (s[i] >= 97 && s[i] <= 122) {
				result += s[i];
			}
		}

	}

	cout << result;

	return 0;

}
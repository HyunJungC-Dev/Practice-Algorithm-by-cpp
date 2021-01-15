#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "";
	string num = "";
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 48 && s[i] <= 57) {
			num += s[i];
		}
	}

	int stoi_num = stoi(num);
	int factor_num = 0;

	for (int i = 1; i * i <= stoi_num; i++) {
		if (stoi_num % i == 0){
			factor_num++;
			if (i * i < stoi_num) {
				factor_num++;
			} 
		} 
	}

	cout << stoi_num << "\n" << factor_num;

	return 0;
}
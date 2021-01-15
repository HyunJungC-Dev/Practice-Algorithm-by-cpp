#include <iostream>
#include <string>

using namespace std;

int main() {
	int year = 0;
	char gender = NULL;
	string ssn = ""; // Social Security Number 012345-789(10)(11)(12)(13)

	cin >> ssn;
	
	year = (ssn[0] - 48) * 10 + (ssn[1] - 48); // ASCII code
	if (ssn[7] == '2') {
		gender = 'W';
		year += 1900;
	}
	else if (ssn[7] == '4') {
		gender = 'W';
		year += 2000;
	}
	else if (ssn[7] == '1') {
		gender = 'M';
		year += 1900;
	}
	else if (ssn[7] == '3') {
		gender = 'M';
		year += 2000;
	}

	cout << 2019 - year + 1 << " " << gender;
	return 0;
}
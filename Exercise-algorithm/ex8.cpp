#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string opening = "({[";
	string closing = ")}]";
	string is_pair = "";

	string brackets = "";
	cin >> brackets;
	
	stack<char> openStack;

	for (int i = 0; i < brackets.size(); i++) {
		if (brackets[i] == opening[0] 
			|| brackets[i] == opening[1] 
			|| brackets[i] == opening[2]) {
			openStack.push(brackets[i]);
		}
		else {
			if (openStack.empty()) {
				is_pair = "NO";
				cout << is_pair;
				return 0;
			}
			
			if ((brackets[i] == closing[0] && openStack.top() == opening[0])
				|| (brackets[i] == closing[1] && openStack.top() == opening[1])
				|| (brackets[i] == closing[2] && openStack.top() == opening[2])) {
				openStack.pop();
			}
			else {
				is_pair = "NO";
				cout << is_pair;
				return 0;
			}
				
		}
	}

	if (openStack.empty()) {
		is_pair = "YES";
		cout << is_pair;
	}
	else {
		is_pair = "NO";
		cout << is_pair;
	}

	return 0;
	
}
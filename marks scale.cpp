#include <iostream>
int namespace std;

int main() {
	int marks;
	cout << "enter your marks:  ";
	cin >> marks;

	if (marks >= 90) {
		cout << "You got an A! You're a smartass!!!" << endl;
	}
	else if (marks >= 80) {
		cout << "You got a B! You're barely there!" << endl;
	}
	else if (marks >= 70) {
		cout << "You got a C! You're Ccccccneaaaaking your way in..." << endl;
	}
	else if (marks >= 60) {
		cout << "You got a D! I'm not going to congratulate you on this." << endl;
	}
	else (marks < 60) {
		cout << "You got an F. I'm sure your parents are proud." << endl;
	}
	return 0;
}
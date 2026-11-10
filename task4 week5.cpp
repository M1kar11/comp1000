#include <iostream>
using namespace std;

int counter = 0;
void incrementCounter() {
	counter++;
}

void displayCounter() {
	cout << "Counter value is: " << counter << endl;
}

int main() {
	incrementCounter();
		displayCounter();
		incrementCounter();
		displayCounter();
		return 0;
}
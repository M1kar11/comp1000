#include <iostream>
using namespace std;

void trackFunctionCalls() {
	static int callCount = 66;
	callCount++;
	cout << "This is the function " << callCount << " times." << endl;

}

int main() {
	trackFunctionCalls();
	trackFunctionCalls();
	trackFunctionCalls();
	return 0;
}
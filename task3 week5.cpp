#include <iostream>
#include <cmath>
using namespace std;


	float calculateDistance(float x1, float y1, float x2, float y2) {
		return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	}

	int main() {
		float x1, y1, x2, y2;
		cout << "Enter coords of point 1 (x1, y1):";
		cin >> x1 >> y1;
		cout << "Enter coords of point 2 (x2, y2):";
		cin >> x2 >> y2;
		float distance = calculateDistance(x1, y1, x2, y2);
		cout << "Distance between points : " << distance << endl;
		return 0;
}
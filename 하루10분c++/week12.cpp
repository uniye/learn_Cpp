#include <iostream>
using namespace std;
int sum(int, int);
float sum(float, float);

int main() {
	int a, b;
	cin >> a >> b;
	cout << "a와 b의 합" << sum(a, b);
	float c, d;
	cin >> c >> d;
	cout << "c와 d의 합" << sum(c, d);

	return 0;
}
int sum(int a, int b) {
	return a + b;
}
float sum(float a, float b) {
	return a + b;
}




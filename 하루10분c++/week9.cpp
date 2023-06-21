#include <iostream>
#define PIE 3.141592
#define SIZE 10
using namespace std;

float circle(int x);
int sumarr(int[], int);
int suma(int*, int);

int main() {
	float c = circle(5);
	cout << c << endl;
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = sumarr(arr, SIZE);
	cout << sum << endl;
	int sum1 = suma(arr, SIZE);
	cout << sum1 << endl;


	return 0;
}
int suma(int* a, int n) {
	cout << "Size of arr" << sizeof a << endl; 
	int total = 0;
	for (int i = 0; i < n; i++)
		total += a[i];
	return total;
}
int sumarr(int arr[], int n) {
	int total = 0;
	for (int i = 0; i < n; i++)
		total += arr[i];
	return total;
}

float circle(int x) {
	return x * x * PIE;
}


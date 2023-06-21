#include <iostream>
using namespace std;
int main() {
	//for문
	char a[10] = { 'a','b','c','d','e' };
	for (int i = 0; i < 5; i++) { // int i는 블록 안에서 선언되어있으므로 밖에선 사용x
		cout << a[i] << endl;
	}

	//증감자 ++,--
	int b = 10;
	int c = 10;
	cout << b++ << endl;
	cout << ++c << endl;
	cout << b << endl;

	//while문
	int j = 0;
	while (j < 3) {
		j++;
	}

	int k = 0;
	string str = "UniYe";
	do {
		cout << str[k] << endl;
		k++;
	} while (str[k] != '\0');
	bool d = true;
	bool e = false;
	int f = 0;
	while (d) { //무한 반복
		if (f == 2)
			break;
		f++;
	}
	while (e) {//실행 안함

	}

	//배열 기반 반복문
	int a1[5] = { 1,2,3,4,5 };
	for (int i : a1) { //배열의 사이즈를 모두 출력하므로 적게 초기화하면 0까지 출력
		cout << i;
	}
	cout << "" << endl;

	//중첩 루프: 2차원 배열
	int temp[4][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << "  ";
		}
	}

	return 0;
}



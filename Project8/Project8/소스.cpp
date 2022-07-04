#include <iostream>
using namespace std;

int main() {
	//분기 구문: if 구문
	if (false) {
		cout << "조건이 참이다" << endl;
		cout << "알았쥬?" << endl;
	}
	else {
		cout << "조건이 거짓이다" << endl;
		cout << "알았쥬?" << endl;
	}

	//논리 표현식: 논리합, 논리곱, 논리부정 연산자
	//논리합 ||
	//논리곱 &&
	//논리부정 !(표현식)

	//switch, break continue 구문
	int a;
	cin >> a;
	switch (a) {//실행속도면에서 if보다 좋음
	case 1:
		cout << "입력값은 1" << endl;
		break;
	case 2:
		cout << "입력값은 2" << endl;
		break;
	case 3:
		cout << "입력값은 3" << endl;
		break;
	case 4:
		cout << "입력값은 4" << endl;//default까지 출력되는 것을 볼 수 있음
	case 5:
		cout << "입력값은 5" << endl;
		break;
	default:
		cout << "입력값은 1~5범위 밖" << endl;
		break;
	}
	return 0;
}
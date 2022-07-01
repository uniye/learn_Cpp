#include <iostream>
using namespace std;

int main() {
	//공용체: 메모리 절약: 동시에 여러 데이터형을 사용할 수 없음.
	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};
	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	//열거체: 기호 상수를 만드는 것에 대한 또다른 방법
	enum spectrum {
		red,orange,yellow,green,blue
	}; //새로운 데이터형 이름으로 만듬 
	//0~4의 정수 값을 각각 나타내는 기호 상수를 만듬
	//열거자들끼리는 연산불가.
	spectrum a;
	a = orange;
	cout << a << endl;
	int b;
	b = blue;
	b = blue + 3; //4+3
	enum spectrum1 { //초기화할때는 정수로
		red=1, orange=3, yellow=5, green=7, blue //blue(초기화x)는 green의 +1값
	};
}
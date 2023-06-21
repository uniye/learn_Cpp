#include <iostream>
using namespace std;

//class 혹은 typeName
template <class Any> //데이터형의 일반화
Any sum(Any, Any);

template <class Any>
Any sum(int, Any); //sum(a,c)를 사용하기 위한 것.


int main() {
	//함수 템플릿
	//구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
	int a = 3;
	int b = 4;
	//cout << sum(a, b) << endl; //첫번째 sum에도 매칭이되고 두번째 sum에도 매칭이 되어 사용 불가

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;

	cout << sum(a, c) << endl; //any를 int와 매치되어있기 때문에 c를 받아들이지 못한다.
	return 0;
}

template<class Any>
Any sum(Any a, Any b) {
	return a + b;
}

template<class Any>
Any sum(int a, Any b) {
	return a + b;
}


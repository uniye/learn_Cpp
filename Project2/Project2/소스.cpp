#include <iostream>
#include <climits>

using namespace std;

int main() {
	int a=3; //초기화

	a = 10;

	//변수는 사용되기 이전에 정의하여야 함.
	//블록의 경우도 마찬가지

	cout << "a=" << a << endl;
	cout << "주소: a=" << &a << endl; 

	//short, int , long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout<< "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << "이다." << endl;

	cout << "short는 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << "이다." << endl;

	cout << "long는 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << "이다." << endl;

	cout << "long는 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << "이다." << endl;

	unsigned int a1=-1; // 0~ 음의 정수x

	//float

	float b1 = 3.44;

	//char : 작은 문자형 = 한단어
	int a2 = 77;
	char b2 = a;
	cout << b2 << endl; //아스키코드 출력
	char c1 = 'a';//큰 따옴표는 큰 문자열(null이 포함) -> null문자 때문에 ''로 표현

	char c2[] = { 'a','b','c','\0' };
	cout << c2 << endl;

	//bool: 0(false) 혹은 1(true)
	bool a3 =0;
	bool b3 = 1;
	bool c3 = 10;
	cout << a3 << b3 << c3 << endl;


	// 바뀔 필요가 없는 수, 바뀌어서는 안되는 수 = 상수 
	// => #define PIE 3.1415926535 : c에서 정의하는 스타일
	const float PIE = 3.1415926535; //c++스타일, 무조건 초기화해야함

	//데이터형 변환
	int aa = 3.141592;
	cout << a << endl;
	//강제적 데이터 변환
	//typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;
	//c++
	//static_cast<typeName>
	cout << static_cast<int>(ch) << endl;


	//산술 연산자
	//+ - * / %
	//auto c++가 알아서 자료형 결정 => 별로 좋지 않은 코딩습관.
	auto n = 100;
	auto x = 1.5;
	auto y = 1.3e12L; //longlong


	return 0;
}

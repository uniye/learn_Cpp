#include<iostream>
using namespace std;

inline float square(float x) { return x * x; }
void id(string, int age = 1);

int main() {
	//인라인 함수: 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
	//컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체
	int a = 5;
	cout << "한 변의 길이가 " << a << " 인 정사각형의 넓이는?" << endl;
	float b = square(a);
	cout << b << endl;

	//디폴트 매개변수
	id("Uni");//age를 입력하지 않았을때 age가 1로 출력됨

	//참조: 미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용이름
	//함수의 매개변수에 사용
	int a1;
	int& b = a; // 참조 연산자이자 주소.

	int wallet1 = 100;
	int wallet2 = 200;

	swapA(wallet1,wallet2);
	cout << "참조 교환" << wallet1 << "  " << wallet2 << endl;

	swapB(&wallet1, &wallet2);
	cout << "포인터 교환" << wallet1 << "  " << wallet2 << endl;

	swapC(wallet1, wallet2);
	cout << "값 교환" << wallet1 << "  " << wallet2 << endl;

	//값으로 교환한 것은 바뀌지 않은 것을 알 수 있음.

	return 0;
}
void id(string name, int age) {
	cout << name << endl;
	cout << age << endl; 
}

//참조로 전달
void swapA(int& a, int&b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//포인터로 전달
void swapB(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
//값으로 전달
void swapC(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

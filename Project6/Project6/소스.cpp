#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


#define Size 20
using namespace std;

int main() {
	//포인터: 사용할 주소에 이름을 붙이는 것.
	int a = 6;
	int* b = &a;
	cout << b << endl; //*b의 주소 = &a
	cout << &b<< endl; //포인터 주소
	cout << *b << endl; //*b의 값 = a

	//new 연산자
	//어떤 데이터형을 원하는지 new 연산자에게 알려주면 
	//new 연산자는 그에 맞는 크기의 메모리 블록을 찾아내고 주소를 리턴한다.
	int* pointer = new int;//new를 통해 뒤에 따라오는 데이터형에 따라 메모리가 얼마나 필요한지 봄
	//=> 그냥 초기화 가능 //데이터 객체를 가르키고 있음


	//delete 연산자
	//사용한 메모리를 다시 메모리 폴로 환수
	//환수된 메모리는 프로그램의 다른 부분이 다시 사용
	int* ps = new int;
	delete ps;
	/*규칙:
	new 대입하지 않은 메모리는 delet로 해제 x, 
	같은 메모리 블록을 연달아 두번 delete 불가,
	new[]로 메모리를 대입할 경우 delete[]로 해제한다.
	->대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
	*/
	double* p3 = new double[3];
	p3[0] = 0.1;
	p3[1] = 0.2;
	p3[2] = 0.3;

	cout << p3[0] << endl;
	p3=p3 + 1;
	cout << p3[0] << endl;
	p3 = p3 - 1;
	cout << p3[0] << endl;
	delete[] p3;

	char animal[Size];
	char* p;
	cout << "동물 이름을 입력하세요\n";
	cin >> animal;
	p = new char[strlen(animal) + 1];
	strcpy(p,animal);
	cout << animal << "(값)  " << (int*)animal << "(주소)" << endl;
	cout << p << "(값)  " << (int*)p << "(주소)" << endl; //복사된 값의 주소가 다름

	return 0;
}
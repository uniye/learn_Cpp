#include<iostream>
#include"student.h"

using namespace std;


int main() {
	//show()함수를 <<로 만들어보기
	//<<연산자 오버로딩
	int x = 5;
	int y = 7;
	(cout << x) << y << endl; //이런식으로 실행됨

	Student s1("Ye", 8, 2, 20804);
	Student s2("Uni", 7, 2, 20715);

	cout << s1;

	return 0;
}
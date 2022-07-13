#include<iostream>
#include"Animal.h"
using namespace std;

int main() {
	//상속
	/*
	1. 기존의 클래스에 새로운 기능 추가
	2. 클래스가 나타내고 있는 데이터에 다른 것 추가
	3. 메서드 동작 방식 변경 가능
	*/
	Dog dog1("치와와", true, "또리");
	dog1.show();
	return 0;
}
#include<iostream>
#include"Animal.h"
using namespace std;

const int MAX = 3;

int main() {
	//상속
	/*
	1. 기존의 클래스에 새로운 기능 추가
	2. 클래스가 나타내고 있는 데이터에 다른 것 추가
	3. 메서드 동작 방식 변경 가능
	*/
	Dog dog1("치와와", true, "또리");
	dog1.show();

	Animal* animals[MAX];
	string species;
	bool leg;
	string name;

	for (int i = 0; i < MAX; i++) {
		bool check;
		cout << "종 입력: ";
		cin >> species;
		cout << "다리 여부(1=true/0=false): ";
		cin >> leg;
		cout << "개과 입니까?(1=true/0=false): ";
		cin >> check;
		if (check == true) {
			cout << "이름 입력: ";
			cin >> name;
			animals[i] = new Dog(species, leg, name);
		}
		else
			animals[i] = new Animal(species, leg);

	}
	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 정보" << endl;
		animals[i]->show();
	}
	for (int i = 0; i < MAX; i++) {
		delete animals[i];
	}

	return 0;
}

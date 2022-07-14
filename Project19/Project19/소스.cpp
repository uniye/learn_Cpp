#include<iostream>
#include"Animal.h"
using namespace std;

const int MAX = 3;


int main() {
	//���
	/*
	1. ������ Ŭ������ ���ο� ��� �߰�
	2. Ŭ������ ��Ÿ���� �ִ� �����Ϳ� �ٸ� �� �߰�
	3. �޼��� ���� ��� ���� ����
	*/
	Dog dog1("ġ�Ϳ�", true, "�Ǹ�");
	dog1.show();

	Animal* animals[MAX];
	string species;
	bool leg;
	string name;

	for (int i = 0; i < MAX; i++) {
		bool check;
		cout << "�� �Է�: ";
		cin >> species ;
		cout << "�ٸ� ����(1=true/0=false): ";
		cin >>leg;
		cout << "���� �Դϱ�?(1=true/0=false): ";
		cin >> check;
		if (check == true) {
			cout << "�̸� �Է�: ";
			cin >> name;
			animals[i] = new Dog(species,leg, name);
		}
		else
			animals[i] = new Animal(species, leg);
		
	}
	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "��° ����" << endl;
		animals[i]->show();
	}
	for (int i = 0; i < MAX; i++) {
		delete animals[i];
	}

	return 0;
}
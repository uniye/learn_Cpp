#include<iostream>
#include"student.h"

using namespace std;


int main() {
	//show()�Լ��� <<�� ������
	//<<������ �����ε�
	int x = 5;
	int y = 7;
	(cout << x) << y << endl; //�̷������� �����

	Student s1("Ye", 8, 2, 20804);
	Student s2("Uni", 7, 2, 20715);

	cout << s1;

	return 0;
}
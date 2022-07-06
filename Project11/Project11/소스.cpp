#include<iostream>
using namespace std;

inline float square(float x) { return x * x; }
void id(string, int age = 1);

int main() {
	//�ζ��� �Լ�: �����ϵ� �Լ� �ڵ尡 ���α׷��� �ٸ� �ڵ忡 ����
	//�����Ϸ��� �ζ��� �Լ� ȣ�� = ������ �ƴ� �׿� �����ϴ� �Լ� �ڵ�� ��ü
	int a = 5;
	cout << "�� ���� ���̰� " << a << " �� ���簢���� ���̴�?" << endl;
	float b = square(a);
	cout << b << endl;

	//����Ʈ �Ű�����
	id("Uni");//age�� �Է����� �ʾ����� age�� 1�� ��µ�

	//����: �̸� ���ǵ� ������ ���� �̸� ��� ����� �� �ִ� ����̸�
	//�Լ��� �Ű������� ���
	int a1;
	int& b = a; // ���� ���������� �ּ�.

	int wallet1 = 100;
	int wallet2 = 200;

	swapA(wallet1,wallet2);
	cout << "���� ��ȯ" << wallet1 << "  " << wallet2 << endl;

	swapB(&wallet1, &wallet2);
	cout << "������ ��ȯ" << wallet1 << "  " << wallet2 << endl;

	swapC(wallet1, wallet2);
	cout << "�� ��ȯ" << wallet1 << "  " << wallet2 << endl;

	//������ ��ȯ�� ���� �ٲ��� ���� ���� �� �� ����.

	return 0;
}
void id(string name, int age) {
	cout << name << endl;
	cout << age << endl; 
}

//������ ����
void swapA(int& a, int&b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//�����ͷ� ����
void swapB(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
//������ ����
void swapC(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

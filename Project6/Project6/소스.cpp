#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


#define Size 20
using namespace std;

int main() {
	//������: ����� �ּҿ� �̸��� ���̴� ��.
	int a = 6;
	int* b = &a;
	cout << b << endl; //*b�� �ּ� = &a
	cout << &b<< endl; //������ �ּ�
	cout << *b << endl; //*b�� �� = a

	//new ������
	//� ���������� ���ϴ��� new �����ڿ��� �˷��ָ� 
	//new �����ڴ� �׿� �´� ũ���� �޸� ����� ã�Ƴ��� �ּҸ� �����Ѵ�.
	int* pointer = new int;//new�� ���� �ڿ� ������� ���������� ���� �޸𸮰� �󸶳� �ʿ����� ��
	//=> �׳� �ʱ�ȭ ���� //������ ��ü�� ����Ű�� ����


	//delete ������
	//����� �޸𸮸� �ٽ� �޸� ���� ȯ��
	//ȯ���� �޸𸮴� ���α׷��� �ٸ� �κ��� �ٽ� ���
	int* ps = new int;
	delete ps;
	/*��Ģ:
	new �������� ���� �޸𸮴� delet�� ���� x, 
	���� �޸� ����� ���޾� �ι� delete �Ұ�,
	new[]�� �޸𸮸� ������ ��� delete[]�� �����Ѵ�.
	->���ȣ�� ������� �ʾҴٸ� delete�� ���ȣ�� ������� �ʾƾ� �Ѵ�.
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
	cout << "���� �̸��� �Է��ϼ���\n";
	cin >> animal;
	p = new char[strlen(animal) + 1];
	strcpy(p,animal);
	cout << animal << "(��)  " << (int*)animal << "(�ּ�)" << endl;
	cout << p << "(��)  " << (int*)p << "(�ּ�)" << endl; //����� ���� �ּҰ� �ٸ�

	return 0;
}
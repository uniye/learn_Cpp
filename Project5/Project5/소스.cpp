#include <iostream>
using namespace std;

int main() {
	//����ü: �޸� ����: ���ÿ� ���� ���������� ����� �� ����.
	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};
	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	//����ü: ��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���
	enum spectrum {
		red,orange,yellow,green,blue
	}; //���ο� �������� �̸����� ���� 
	//0~4�� ���� ���� ���� ��Ÿ���� ��ȣ ����� ����
	//�����ڵ鳢���� ����Ұ�.
	spectrum a;
	a = orange;
	cout << a << endl;
	int b;
	b = blue;
	b = blue + 3; //4+3
	enum spectrum1 { //�ʱ�ȭ�Ҷ��� ������
		red=1, orange=3, yellow=5, green=7, blue //blue(�ʱ�ȭx)�� green�� +1��
	};
}
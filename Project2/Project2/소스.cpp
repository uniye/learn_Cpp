#include <iostream>
#include <climits>

using namespace std;

int main() {
	int a=3; //�ʱ�ȭ

	a = 10;

	//������ ���Ǳ� ������ �����Ͽ��� ��.
	//����� ��쵵 ��������

	cout << "a=" << a << endl;
	cout << "�ּ�: a=" << &a << endl; 

	//short, int , long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout<< "int�� " << sizeof n_int << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_int << "�̴�." << endl;

	cout << "short�� " << sizeof n_short << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_short << "�̴�." << endl;

	cout << "long�� " << sizeof n_long << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_long << "�̴�." << endl;

	cout << "long�� " << sizeof n_llong << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_llong << "�̴�." << endl;

	unsigned int a1=-1; // 0~ ���� ����x

	//float

	float b1 = 3.44;

	//char : ���� ������ = �Ѵܾ�
	int a2 = 77;
	char b2 = a;
	cout << b2 << endl; //�ƽ�Ű�ڵ� ���
	char c1 = 'a';//ū ����ǥ�� ū ���ڿ�(null�� ����) -> null���� ������ ''�� ǥ��

	char c2[] = { 'a','b','c','\0' };
	cout << c2 << endl;

	//bool: 0(false) Ȥ�� 1(true)
	bool a3 =0;
	bool b3 = 1;
	bool c3 = 10;
	cout << a3 << b3 << c3 << endl;


	// �ٲ� �ʿ䰡 ���� ��, �ٲ��� �ȵǴ� �� = ��� 
	// => #define PIE 3.1415926535 : c���� �����ϴ� ��Ÿ��
	const float PIE = 3.1415926535; //c++��Ÿ��, ������ �ʱ�ȭ�ؾ���

	//�������� ��ȯ
	int aa = 3.141592;
	cout << a << endl;
	//������ ������ ��ȯ
	//typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;
	//c++
	//static_cast<typeName>
	cout << static_cast<int>(ch) << endl;


	//��� ������
	//+ - * / %
	//auto c++�� �˾Ƽ� �ڷ��� ���� => ���� ���� ���� �ڵ�����.
	auto n = 100;
	auto x = 1.5;
	auto y = 1.3e12L; //longlong


	return 0;
}

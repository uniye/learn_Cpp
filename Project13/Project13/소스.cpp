#include <iostream>
using namespace std;

//class Ȥ�� typeName
template <class Any> //���������� �Ϲ�ȭ
Any sum(Any, Any);

template <class Any>
Any sum(int,Any); //sum(a,c)�� ����ϱ� ���� ��.


int main() {
	//�Լ� ���ø�
	//��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� ����
	int a = 3;
	int b = 4;
	//cout << sum(a, b) << endl; //ù��° sum���� ��Ī�̵ǰ� �ι�° sum���� ��Ī�� �Ǿ� ��� �Ұ�

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;

	cout << sum(a,c) << endl; //any�� int�� ��ġ�Ǿ��ֱ� ������ c�� �޾Ƶ����� ���Ѵ�.
	return 0;
}

template<class Any>
Any sum(Any a, Any b) {
	return a + b;
}

template<class Any>
Any sum(int a, Any b) {
	return a + b;
}
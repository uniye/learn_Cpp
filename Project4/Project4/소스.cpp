#include <iostream>

using namespace std;

int main() {
	//����ü: �ٸ� ���������� ���Ǵ� ������ ���� - Ŭ��������
	//cf) �迭: ���� ���������� ����

	struct MyStruct {
		string name;
		string position;
		float height;
		float weight;
	};

	MyStruct A;
	A.name = "��";
	A.position = "��Ʈ����Ŀ";
	A.height = 182;
	A.weight = 78;

	MyStruct B = {
		"��",
		"�����",
		175,
		68
	}; //�̷��Ե� �ʱ�ȭ ����
	cout << B.name << endl;
	cout << B.position << endl;
	cout << B.height << endl;
	cout << B.weight << endl;

	//������� �Ѳ����� �ʱ�ȭ
	MyStruct D[2] = {
		{"�̸�","������",188,88},
		{"�̸�1","������1",178,78}
	};
	cout << D[0].name << endl;
	cout << D[1].position << endl;
	cout << D[1].height << endl;
	cout << D[0].weight << endl;

	struct MyStruct1 {
		string name;
		string position;
		float height;
		float weight;
	}C;//�̷��� ����ü �ٷ� ���� ����
	C = {

	};//�̷��� �ϸ� 0���� ��� �� ����
	cout << C.name << endl;
	cout << C.position << endl;
	cout << C.height << endl;
	cout << C.weight << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	//�б� ����: if ����
	if (false) {
		cout << "������ ���̴�" << endl;
		cout << "�˾���?" << endl;
	}
	else {
		cout << "������ �����̴�" << endl;
		cout << "�˾���?" << endl;
	}

	//�� ǥ����: ����, ����, ������ ������
	//���� ||
	//���� &&
	//������ !(ǥ����)

	//switch, break continue ����
	int a;
	cin >> a;
	switch (a) {//����ӵ��鿡�� if���� ����
	case 1:
		cout << "�Է°��� 1" << endl;
		break;
	case 2:
		cout << "�Է°��� 2" << endl;
		break;
	case 3:
		cout << "�Է°��� 3" << endl;
		break;
	case 4:
		cout << "�Է°��� 4" << endl;//default���� ��µǴ� ���� �� �� ����
	case 5:
		cout << "�Է°��� 5" << endl;
		break;
	default:
		cout << "�Է°��� 1~5���� ��" << endl;
		break;
	}
	return 0;
}
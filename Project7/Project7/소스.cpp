#include <iostream>
using namespace std;
int main() {
	//for��
	char a[10] = { 'a','b','c','d','e' };
	for (int i = 0; i < 5; i++) { // int i�� ��� �ȿ��� ����Ǿ������Ƿ� �ۿ��� ���x
		cout << a[i] << endl;
	}

	//������ ++,--
	int b = 10;
	int c = 10;
	cout << b++ << endl;
	cout << ++c << endl;
	cout << b << endl;

	//while��
	int j = 0;
	while (j < 3) {
		j++;
	}

	int k = 0;
	string str = "UniYe";
	do {
		cout << str[k] << endl;
		k++;
	} while (str[k] != '\0');
	bool d = true;
	bool e = false;
	int f = 0;
	while (d) { //���� �ݺ�
		if (f == 2)
			break;
		f++;
	}
	while (e) {//���� ����

	}

	//�迭 ��� �ݺ���
	int a1[5] = { 1,2,3,4,5 };
	for (int i : a1) { //�迭�� ����� ��� ����ϹǷ� ���� �ʱ�ȭ�ϸ� 0���� ���
		cout << i;
	}
	cout << "" << endl;

	//��ø ����: 2���� �迭
	int temp[4][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << "  ";
		}
	}



	return 0;
}
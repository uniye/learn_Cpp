#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//�迭
	short month[12] = {1,2,3};
	cout << month[4] << endl; // ������ ���Ҵ� 0���� ����Ǿ� �ִ� ���� Ȯ��


	short mm[] = { 1,1,1 }; //���Ƿ� �迭 �������.
	cout << month[4] << endl; //�ּҰ� ��µǴ� ���� Ȯ��


	//���ڿ�
	char a[5] = {'H','a','n','i'};
	cout << a << endl; //�ǹ̾��� ����(Null�� ������)���� ����ϴ� ���� Ȯ��

	char b[5] = { 'H','a','n','i' ,'\0' }; //�̷��� �ؾ� �ǹ� ���� ���ڱ��� ���
	char b1[] = "Hani"; //���� ����.


	//cin�� string
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "ABCDEFG";
	char name3[Size];

	cout << "���ڸ� �Է� �ٶ��ϴ�." << endl;

	cin >> name1; //���ڸ� �Է¹޴´�. ����x
	//(�����̽�, ����, �� �� ������ �Է� �ް��� �Ѵٸ� get�� getline)
	cout << sizeof(name1) << "����Ʈ�� ����" << endl;
	cout << strlen(name1) << "�� �Դϴ�." << endl;
	

	cout << "������ ������ ���ڸ� �Է� �ٶ��ϴ�." << endl; //�տ��� ������ �޾ƹ����� �����ǰ� �Ѿ
	cin.getline(name3, Size); //���� �Է� ����
	cout << sizeof(name3) << "����Ʈ�� ����" << endl;
	cout << strlen(name3) << "�� �Դϴ�." << endl;

	name2[3] = '\0'; //�ε��� 3�� null ����
	cout << name2 << endl; // null�� �а� ��� ����


	//���ڿ� string ����
	//�迭�� �ٸ� �迭�� ��°�� ���� �Ұ���. but, string�� ����
	char char1[20];
	char char2[20] = "thisisarray";
	string str1;
	string str2 = "thisisstring";
	//char1 = char2; //������
	str1 = str2; //���� �ȳ�
	str1 = str2;
	cout << str1 << endl;







	return 0;
}
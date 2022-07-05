#include<iostream>
using namespace std;
struct Time {
	int hour;
	int mins;
};
const int minsPerHr = 60;

Time sum(Time*, Time*);
void showTime(Time t1);
void countDown(int);
int func(int);

int main() {
	Time day1 = { 5,45 };
	Time day2 = { 4,55 };
	Time total = sum(&day1, &day2);
	cout << "��Ʋ�� �ҿ� �ð�: ";
	showTime(total);


	//����Լ�
	countDown(5);

	//�Լ��� �����ϴ� ������: ��� �Լ��� �Լ��� �ּҸ� �Ű������� �Ѱ��ִ� ��� ������
	int (*pf)(int);
	pf = func;
	cout << (*pf)(3) << endl;
	return 0;
}
void countDown(int n) {
	cout << "ī����" << n << endl;
	if (n > 0)
		countDown(n - 1);
	cout << n << "��° ����Լ�" << endl;
}
int func(int n) {
	return n + 1;
}

Time sum(Time* t1, Time* t2) { //�����ͷ� �ؾ� �ð� ���� ����
	Time total;
	total.mins = (t1->mins + t2->mins) % minsPerHr;
	total.hour = t1->hour + t2->hour + (t1->mins + t2->mins) / minsPerHr;
	return total;
}

void showTime(Time t1) {
	cout << t1.hour << "�ð�, " << t1.mins <<"��" << endl;
}
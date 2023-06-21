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
	cout << "이틀간 소요 시간: ";
	showTime(total);


	//재귀함수
	countDown(5);

	//함수를 지시하는 포인터: 어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용함
	int (*pf)(int);
	pf = func;
	cout << (*pf)(3) << endl;
	return 0;
}
void countDown(int n) {
	cout << "카운팅" << n << endl;
	if (n > 0)
		countDown(n - 1);
	cout << n << "번째 재귀함수" << endl;
}
int func(int n) {
	return n + 1;
}

Time sum(Time* t1, Time* t2) { //포인터로 해야 시간 절약 가능
	Time total;
	total.mins = (t1->mins + t2->mins) % minsPerHr;
	total.hour = t1->hour + t2->hour + (t1->mins + t2->mins) / minsPerHr;
	return total;
}

void showTime(Time t1) {
	cout << t1.hour << "시간, " << t1.mins <<"분" << endl;
}

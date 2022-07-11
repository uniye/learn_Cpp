#include<iostream>
#include"time.h"
 
using namespace std;

int main() {
	Time day1(1, 40);
	Time day2(2, 50);
	day1.show();
	day2.show();

	Time total;
	//total = day1.sum(day2);
	//total.show();
	total = day1.operator+(day2);
	Time total2;
	total2 = day1 + day2; //operater에 오버로딩된것임.
	total.show();
	total2.show();



	return 0;
}
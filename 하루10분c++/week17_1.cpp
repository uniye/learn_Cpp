#include"time.h"

Time::Time() {
	hours = 0;
	mins = 0;
}
Time::Time(int h, int m) {
	hours = h;
	mins = m;
}
void Time::addHours(int h) {
	hours += h;
}
void Time::addMins(int m) {
	mins += m;
	hours += mins / 60;
	mins %= 60;
}
//Time Time::sum(Time& t)
Time Time::operator+(Time& t) {
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
}
void Time::show() {
	std::cout << "시간: " << hours << std::endl;
	std::cout << "분: " << mins << std::endl;
}

Time::~Time() {
}

//Time operator*(int n, Time& t) { //friend 멤버 함수가 아니기에 Time::을 안 붙여줌
//	Time result;
//	long resultMin = t.hours * n * 60 + t.mins * n;
//	result.hours = resultMin / 60;
//	result.mins = resultMin % 60;
//	return result;
//}

Time Time::operator*(int n) {
	Time result;
	long resultMin = t.hours * n * 60 + t.mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}


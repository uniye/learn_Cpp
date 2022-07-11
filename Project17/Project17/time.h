#include<iostream>
#ifndef TIMEH
#define TIMEH
class Time {
private:
	int hours;
	int mins;

public:
	Time();
	Time(int,int);
	void addHours(int);
	void addMins(int);
	//Time sum(Time&);
	Time operator+(Time&);
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) {
		return t * n;
	}

};

#endif
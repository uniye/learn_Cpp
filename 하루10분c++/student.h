#include<iostream>
#ifndef STUDENTH
#define STUDENTH
using namespace std;
class Student {
private:
	string name;
	int cl;
	int grade;
	int id;
public:
	Student();
	Student(string, int, int, int);
	friend std::ostream& operator<< (std::ostream&, Student&);
};
#endif

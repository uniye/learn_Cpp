#include"student.h"


Student::Student() {
	name = "";
	cl = 0;
	grade = 0;
	id = 0;
}

Student::Student (string n, int c, int g, int i) {
	name = n;
	cl = c;
	grade = g;
	id = i;
}

std::ostream& operator<< (std::ostream& os, Student& s) {
	os << s.name << "�л�, " << s.grade << "�г� " << s.cl << "�� : �й�" << s.id;
	return os; //os�� ������ return.
}
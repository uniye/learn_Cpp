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
	os << s.name << "학생, " << s.grade << "학년 " << s.cl << "반 : 학번" << s.id;
	return os; //os의 참조를 return.
}
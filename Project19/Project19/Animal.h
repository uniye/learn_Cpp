#include<iostream>
using namespace std;
#ifndef ANIMALH
#define ANIMALH
class Animal {
private:
	string species;
	bool leg;
public:
	Animal();
	virtual ~Animal();
	Animal(string, bool);
	void run(double);
	void walk(double);
	void eat(string);
	virtual void show(); //���� �޼���: ������ �޼��尡 �ִٴ� ���� �˷���. ���������� ��.
	string getsp() { return species; };
	bool getleg() { return leg; };
};
 //�Ļ� Ŭ����
class Dog : public Animal {
private:
	string name;
public:
	Dog();
	Dog(string,bool,string);
	void show();
};
#endif
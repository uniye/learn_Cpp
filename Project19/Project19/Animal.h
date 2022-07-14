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
	virtual void show(); //가상 메서드: 독립된 메서드가 있다는 것을 알려줌. 동적결합을 함.
	string getsp() { return species; };
	bool getleg() { return leg; };
};
 //파생 클래스
class Dog : public Animal {
private:
	string name;
public:
	Dog();
	Dog(string,bool,string);
	void show();
};
#endif
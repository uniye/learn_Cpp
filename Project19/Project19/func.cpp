#include<iostream>
#include"Animal.h"

using namespace std;

Animal::Animal() {
	species = "";
	leg = false;
}
Animal::Animal(string sp, bool yn) {
	species = sp;
	leg = yn;
}
Animal::~Animal() {

}
void Animal::run(double speed) {
	cout << species << "가 " << speed << "의 속도로 뛴다." << endl;
}
void Animal::walk(double speed) {
	cout << species << "가 " << speed << "의 속도로 걷는다." << endl;
}
void Animal::eat(string some) {
	cout << species << "가 " << some << "을 먹는다." << endl;
}
void Animal::show() {
	cout << species << "종입니다." << endl;
}

Dog::Dog():Animal() {
	name = "";
}
Dog::Dog(string sp, bool yn, string n): Animal(sp, yn){
	name = n;
}

void Dog::show() {
	cout << name << "은/는 "<< getsp()<<"종이고, ";
	if (getleg() == true)
		cout << "다리가 있다." << endl;
	else
		cout << "다리가 없다." << endl;

}
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
	cout << species << "�� " << speed << "�� �ӵ��� �ڴ�." << endl;
}
void Animal::walk(double speed) {
	cout << species << "�� " << speed << "�� �ӵ��� �ȴ´�." << endl;
}
void Animal::eat(string some) {
	cout << species << "�� " << some << "�� �Դ´�." << endl;
}
void Animal::show() {
	cout << species << "���Դϴ�." << endl;
}

Dog::Dog():Animal() {
	name = "";
}
Dog::Dog(string sp, bool yn, string n): Animal(sp, yn){
	name = n;
}

void Dog::show() {
	cout << name << "��/�� "<< getsp()<<"���̰�, ";
	if (getleg() == true)
		cout << "�ٸ��� �ִ�." << endl;
	else
		cout << "�ٸ��� ����." << endl;

}
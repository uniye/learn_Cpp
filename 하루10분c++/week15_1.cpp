#include<iostream>
#include "Stock.h"

void Stock::acquire(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}
void Stock::buy(int n, float pr) {
	shares + n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	cout << "ȸ�� ��: " << name << endl;
	cout << "�ֽ� ��: " << shares << endl;
	cout << "�ְ�: " << share_val << endl;
	cout << "�ֽ� �� ��ġ: " << total_val << endl;
}

Stock::Stock() { //������


}

Stock::~Stock() { //�ı���: Ŭ���� �Ҹ�: �ڵ� ȣ���


}


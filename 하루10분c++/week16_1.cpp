#include <iostream>
#include "OneBookStore.h"

void OneBookStore::resell(int num) {
	if (bookcount < num)
		cout << "다시 판매하려는 책 수가 더 많습니다" << endl;
	else {
		cout << username << "님, <" << bookname << ">을 " << num << "권 판매 완료하였습니다." << endl;
		totalmoney = totalmoney - num * bookamount;
		bookcount = bookcount - num;
	}


}
OneBookStore OneBookStore::topcount(OneBookStore& s) {
	if (s.bookcount > bookcount)
		return s;
	else return *this;
}
void OneBookStore::buy(int num) {
	cout << username << "님, <" << bookname << ">을 " << num << "권 구매 완료하였습니다." << endl;
	totalmoney = totalmoney + num * bookamount;
	bookcount = bookcount + num;
}
void OneBookStore::show() {
	cout << " 안녕하세요! " << username << "님 반갑습니다." << endl;
	cout << bookname << " - " << bookcount << "권, " << bookamount << "(한 권당)원 " << endl;
	cout << "총 금액은 " << totalmoney << "입니다." << endl;
}

OneBookStore::OneBookStore(string n1, string n2, double ba, double bc) {
	username = n1;
	bookname = n2;
	bookamount = ba;
	bookcount = bc;
	set_totalmoney();
}
OneBookStore::OneBookStore() {
	username = "";
	bookname = "";
	bookamount = 0;
	bookcount = 0;
}


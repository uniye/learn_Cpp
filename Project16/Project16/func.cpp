#include <iostream>
#include "OneBookStore.h"

void OneBookStore::resell(int num) {
	if (bookcount < num)
		cout << "�ٽ� �Ǹ��Ϸ��� å ���� �� �����ϴ�" << endl;
	else {
		cout << username << "��, <" << bookname << ">�� " << num << "�� �Ǹ� �Ϸ��Ͽ����ϴ�." << endl;
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
	cout << username << "��, <" << bookname << ">�� " << num << "�� ���� �Ϸ��Ͽ����ϴ�." << endl;
	totalmoney = totalmoney + num * bookamount;
	bookcount = bookcount + num;
}
void OneBookStore::show() {
	cout << " �ȳ��ϼ���! " << username << "�� �ݰ����ϴ�." << endl;
	cout  << bookname<< " - "<<bookcount << "��, "<<bookamount<<"(�� �Ǵ�)�� " << endl;
	cout << "�� �ݾ��� " << totalmoney << "�Դϴ�." << endl;
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

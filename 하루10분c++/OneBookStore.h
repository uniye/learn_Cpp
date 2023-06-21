#ifndef OneBookStore
#include <iostream>

using namespace std;

class OneBookStore {
private:
	string username;
	string bookname;
	double bookamount;
	int bookcount;
	double totalmoney;
	void set_totalmoney() { totalmoney = bookamount * bookcount; };

public:
	void resell(int);
	void buy(int);
	void show();
	OneBookStore topcount(OneBookStore&);
	OneBookStore(string, string, double, double);
	OneBookStore();

};
#endif


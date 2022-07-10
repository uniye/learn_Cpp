#include <iostream>
#include "OneBookStore.h"

int main() {
	
	OneBookStore s[4] = {
		OneBookStore("A","on",2.5,4),
		OneBookStore("B","there",3.0,7),
		OneBookStore("C","GoGo",2.0,6),
		OneBookStore("D","It's short life",5.2,1)
	};

	OneBookStore a("Uni","Once there",2500,5);
	OneBookStore b("Se", "Once there", 2500, 30);
	
	a.show();
	std::cout << endl;
	a.buy(3);
	a.show();
	std::cout << endl;
	a.resell(9);
	std::cout << endl;
	a.resell(4);
	a.show();
	std::cout << endl;

	std::cout << " 두 객체 중 count값이 더 큰 객체는 " << endl;
	a.topcount(b).show();
	return 0;
}
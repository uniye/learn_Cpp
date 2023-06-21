#include<iostream>
#include "Stock.h"

int main() {
	//클래스란? 추상화를 사용자 정의 데이터형으로 변환해주는 수단
	Stock temp;
	temp.acquire("Uni", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();

	return 0;
}


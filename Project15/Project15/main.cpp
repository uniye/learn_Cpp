#include<iostream>
#include "Stock.h"


int main(){
	//Ŭ������? �߻�ȭ�� ����� ���� ������������ ��ȯ���ִ� ����
	Stock temp;
	temp.acquire("Uni",100,1000);
	temp.show();
	temp.buy(10,1200);
	temp.show();
	temp.sell(5,800);
	temp.show();




	return 0;
}
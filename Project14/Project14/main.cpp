#include"struct.h"
#include "plus.cpp"
//#include"new.h"
//헤더 파일을 여러파일에 포함 시킬 때,
//단 한번만 포함해야 함.

//분할 컴파일

int main() {
	MyStruct Uniye = {
		"YE",
		26
	};
	display(Uniye);
	return 0;
}

#include <iostream> //전처리 지시자

/*
c++에서 함수를 사용하고자 한다면?
반드시 그 함수의 원형을 미리 정의하여야 한다
cout의 경우 iostream에서 미리 정의되어 있기에 사용가능하다

*/

using namespace std;
//iostream에 있는 함수를 사용하기 위해서는 
//std::을 붙여야 하는데 이를 생략하고자 하는 것 

// ;종결자

int main() { //c++ 코드에서는 반드시 main이라는 함수가 있어야함.
	cout << "메롱";
	cout << "Hello, world!" << endl;
	//endl은 줄바꿈임
	return 0;
}

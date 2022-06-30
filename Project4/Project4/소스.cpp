#include <iostream>

using namespace std;

int main() {
	//구조체: 다른 데이터형이 허용되는 데이터 집합 - 클래스느낌
	//cf) 배열: 같은 데이터형의 집합

	struct MyStruct {
		string name;
		string position;
		float height;
		float weight;
	};

	MyStruct A;
	A.name = "밥";
	A.position = "스트라이커";
	A.height = 182;
	A.weight = 78;

	MyStruct B = {
		"담",
		"수비수",
		175,
		68
	}; //이렇게도 초기화 가능
	cout << B.name << endl;
	cout << B.position << endl;
	cout << B.height << endl;
	cout << B.weight << endl;

	//여러사람 한꺼번에 초기화
	MyStruct D[2] = {
		{"이름","포지션",188,88},
		{"이름1","포지션1",178,78}
	};
	cout << D[0].name << endl;
	cout << D[1].position << endl;
	cout << D[1].height << endl;
	cout << D[0].weight << endl;

	struct MyStruct1 {
		string name;
		string position;
		float height;
		float weight;
	}C;//이렇게 구조체 바로 선언 가능
	C = {

	};//이렇게 하면 0으로 모든 값 저장
	cout << C.name << endl;
	cout << C.position << endl;
	cout << C.height << endl;
	cout << C.weight << endl;

	return 0;
}
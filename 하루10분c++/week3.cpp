#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//배열
	short month[12] = { 1,2,3 };
	cout << month[4] << endl; // 나머지 원소는 0으로 저장되어 있는 것을 확인


	short mm[] = { 1,1,1 }; //임의로 배열 만들어짐.
	cout << month[4] << endl; //주소가 출력되는 것을 확인


	//문자열
	char a[5] = { 'H','a','n','i' };
	cout << a << endl; //의미없는 문자(Null이 이유인)까지 출력하는 것을 확인

	char b[5] = { 'H','a','n','i' ,'\0' }; //이렇게 해야 의미 없는 문자까지 출력
	char b1[] = "Hani"; //위와 같음.


	//cin과 string
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "ABCDEFG";
	char name3[Size];

	cout << "문자를 입력 바랍니다." << endl;

	cin >> name1; //문자를 입력받는다. 공백x
	//(스페이스, 엔터, 탭 등 공백을 입력 받고자 한다면 get과 getline)
	cout << sizeof(name1) << "바이트의 길이" << endl;
	cout << strlen(name1) << "자 입니다." << endl;


	cout << "공백을 포함한 문자를 입력 바랍니다." << endl; //앞에서 공백을 받아버려서 생략되고 넘어감
	cin.getline(name3, Size); //공백 입력 받음
	cout << sizeof(name3) << "바이트의 길이" << endl;
	cout << strlen(name3) << "자 입니다." << endl;

	name2[3] = '\0'; //인덱스 3에 null 삽입
	cout << name2 << endl; // null을 읽고 출력 중지


	//문자열 string 차이
	//배열을 다른 배열에 통째로 대입 불가능. but, string은 가능
	char char1[20];
	char char2[20] = "thisisarray";
	string str1;
	string str2 = "thisisstring";
	//char1 = char2; //오류남
	str1 = str2; //오류 안남
	str1 = str2;
	cout << str1 << endl;

	return 0;
}



#ifndef STRUCT
#define STRUCT
#include <iostream>
//STRUCT란 이름이 main에 포함되기 위해서는
//` #define STRUCT ` 로 STRUCT를 기호상수로서 정의해주어야 함.
using namespace std;

struct MyStruct {
  string name;
  int age;
};

void dispaly(MyStruct&);

#endif
/*
1. 함수 원형
2. #define이나 const를 사용하는 기호 상수
3. 구조체 선언
4. 클래스 선언
5. 템플릿 선언
6. 인라인 함수
*/

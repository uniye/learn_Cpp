#ifndef STRUCT
#define STRUCT
#include <iostream>
//STRUCT�� �̸��� main�� ���ԵǱ� ���ؼ���
//` #define STRUCT ` �� STRUCT�� ��ȣ����μ� �������־�� ��.
using namespace std;

struct MyStruct{
    string name;
    int age;
};

void dispaly(MyStruct&);

#endif
/*
1. �Լ� ����
2. #define�̳� const�� ����ϴ� ��ȣ ���
3. ����ü ����
4. Ŭ���� ����
5. ���ø� ����
6. �ζ��� �Լ�
*/

#include <iostream>
#include "Student2.h"
//ʹ���������ռ����������������ռ䣬������ʹ�������ռ��ڵ�ȫ�ֱ���
using namespace std; 
using namespace ns2; 
	
Student::Student(int n, string nam, char g, int s):num(n), name(nam), gender(g), score(s) {}
	
int Student::display()
{
 	cout << "num = " << num << ", name = " << name << ", gender = " << gender << ", score = " << score << endl;
	return 0;
}

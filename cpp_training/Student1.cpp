#include <iostream>
#include "Student1.h"
//ʹ���������ռ����������������ռ䣬������ʹ�������ռ��ڵ�ȫ�ֱ���
using namespace std; 
using namespace ns1; 
	
Student::Student(int n, string nam, int age, string add):num(n), name(nam), age(age), address(add) {}
	
int Student::display()
{
 	cout << "num = " << num << ", name = " << name << ", age = " << age << ", address = " << address << endl;
	return 0;
}

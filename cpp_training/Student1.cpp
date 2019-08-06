#include <iostream>
#include "Student1.h"
//使用了命名空间后，如果不引入命名空间，将不能使用命名空间内的全局变量
using namespace std; 
using namespace ns1; 
	
Student::Student(int n, string nam, int age, string add):num(n), name(nam), age(age), address(add) {}
	
int Student::display()
{
 	cout << "num = " << num << ", name = " << name << ", age = " << age << ", address = " << address << endl;
	return 0;
}

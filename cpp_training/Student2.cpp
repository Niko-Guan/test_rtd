#include <iostream>
#include "Student2.h"
//使用了命名空间后，如果不引入命名空间，将不能使用命名空间内的全局变量
using namespace std; 
using namespace ns2; 
	
Student::Student(int n, string nam, char g, int s):num(n), name(nam), gender(g), score(s) {}
	
int Student::display()
{
 	cout << "num = " << num << ", name = " << name << ", gender = " << gender << ", score = " << score << endl;
	return 0;
}

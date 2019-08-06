#include <iostream>
#include "Student1.h"
#include "Student2.h"
using namespace std;

int main()
{
	ns1::Student stud1(1101, "Xiao Ming", 24, "Northern Road");
	stud1.display();
	ns2::Student stud2(1102, "Xiao Guo", 'M', 90);
	stud2.display();
	return 0;
}

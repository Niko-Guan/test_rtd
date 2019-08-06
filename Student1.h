#include <iostream>
#include <cstring>
using namespace std;

namespace ns1
{
    class Student
	{
		public:
			Student(int n, string nam, int age, string add);
			int display();
		private:
			int num;
			string name;
			int age;
			string address;
	};
}



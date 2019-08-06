#include <iostream>
#include <cstring>
using namespace std;

namespace ns2 
{
    class Student
	{
		public:
			Student(int n, string nam, char g, int score);
			int display();
		private:
			int num;
			string name;
			char gender;
			int score;
	};
}



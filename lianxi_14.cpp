#include <iostream>
#include <cstring>
using namespace std;

class Student
{
	public:
		Student(int n, string nam)
		{
			cout << "constructor - " << n << endl;
			num = n;
			name = nam;
		}
		~Student()
		{ cout << "destructor - " << num << endl;}
		int get_data();
	private:
		int num;
		string name;
};

int Student::get_data()
{
	if(num == 0) throw num;
	else cout << num << " " << name << endl;
	cout << "in get_data()" << endl;
	return 0;
}

int fun()
{
	Student stud1(1101, "Tan");
	stud1.get_data();
	try
	{
		Student stud2(0, "Li");
		stud2.get_data();
	}
	catch(int n)
	{
		cout << "num = " << n << ", error!" <<endl;
	}
	return 0;
}

int main()
{
	cout << "main start" << endl;
	cout << "call fun()" << endl;
	fun();
	cout << "main end" << endl;
	return 0;
}

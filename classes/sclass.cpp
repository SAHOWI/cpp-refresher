#include <iostream>

using namespace std;


class MyClass {
	private:
		 int zzz = 0;
	public:
		int xxx = 0;
		int print();
		int add();
		int add(int);
		int sub();
	
};

int MyClass::print()
{
	cout << zzz << "\n";
	return(0);
}

int MyClass::add()
{
	zzz++;
	return(0);
}

int MyClass::add(int inc)
{
	zzz = zzz + inc;
	return(0);
}


int MyClass::sub()
{
	zzz--;
	return(0);
}


int main ()
{
	MyClass my_class; // internal counter is now 0
	my_class.add();   // internal counter is now 1
	my_class.add(5);  // internal counter is now 6
	my_class.print();

	return (0);
}

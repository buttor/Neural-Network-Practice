#include<iostream>
#include<string>

using namespace std;

#define INT_PTR int*
typedef int* int_ptr;

int main()
{
	int_ptr c, d;
	INT_PTR a, b;

	int x = 12;
	a = &x;
	c = &x;
	*c = 14;

	std::cout << *a << " " << *c << std::endl;
	// system.pause("");

	return 0;
}
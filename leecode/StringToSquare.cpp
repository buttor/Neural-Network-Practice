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
	std::cout << "woxiangchaozuoyiwudebee";
	std::cout << "woxiwnagwode1waigongkeyishaoshouyxietongkukaix" << std::endl;
	std::cout << "������ȫ����õ�git�Ľ�ѧ";
	// system.pause("");

	return 0;
}

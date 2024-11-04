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
	std::cout << "我们是全网最好的git的教学";
	// system.pause("");

	return 0;
}

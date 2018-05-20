#include <iostream>

#include "first.hpp"

int main()
{
	First first;
	first.debug();
	first.setNum(5);
	std::cout << "first.num: " << first.getNum() << std::endl;
	return 0;
}

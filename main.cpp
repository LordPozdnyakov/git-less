#include <iostream>

#include "first.hpp"

#include "tests.hpp"

int main()
{
	std::cout << "this is begin of main()";

	First first;

	TEST_EQ(first.getNum(), 0)

	first.debug();

	first.setNum(5);

	first.printNumber();
	std::cout << "first.num: " << first.getNum() << std::endl;

	std::cout << "I am Here!!!\n";

	return 0;
}

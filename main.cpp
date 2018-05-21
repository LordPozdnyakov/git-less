#include <iostream>

#include "first.hpp"

#include "tests.hpp"

int main()
{
	First first;

	TEST_EQ(first.getNum(), 0)

	first.debug();

	first.setNum(5);

	first.printNumber();
	std::cout << "first.num: " << first.getNum() << std::endl;

	TEST_EQ(5, 5)
	TEST_NE(5, 9)

	TEST_NE(5, 5) // <-- bad test

	return 0;
}

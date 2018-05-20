#include <iostream>

#include "first.hpp"

void First::debug()
{
	std::cout << "Holy Shit!!! This is Debug!!!" << std::endl;
}

void First::printNumber()
{
	std::cout << num_ << std::endl;
}

int First::getNum()
{
	return num_;
}

void First::setNum(int num)
{
	num_ = num;
}

#ifndef FIRST_HPP
#define FIRST_HPP

class First
{
public:
	First();
	First(int num);
	~First() = default;

	void debug();
	void printNumber();

	int getNum();
	void setNum(int num);

private:
	int num_;
};

#endif // FIRST_HPP

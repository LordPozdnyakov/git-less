#ifndef FIRST_HPP
#define FIRST_HPP

class First
{
public:
	First() = default;
	~First() = default;

	void debug();
	int getNum();
	void setNum(int num);

private:
	int num_;
};

#endif // FIRST_HPP

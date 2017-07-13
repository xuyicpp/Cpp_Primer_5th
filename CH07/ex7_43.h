#ifndef EX7_43_H_
#define EX7_43_H_

//该类型没有显式定义默认构造函数，编译器也不会为它合成一个
class NoDefault
{
public:
	NoDefault(int i)
	{
		val = i;
	}
	int val;
};

class C
{
public:
	NoDefault nd;
	//必须显式调用Nodefault的带参构造函数初始化nd
	C(int i = 0) : nd(i) { }
};

#endif
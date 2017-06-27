#include <iostream>

using namespace std;

int main()
{
	int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	int (*p)[4] = ia;	//p指向含有4个整数的数组

	//使用auto输出ia中的每个元素，每个内层数组各占一行
	for(auto p=begin(ia); p!=end(ia); p++)
	{
		for(auto q=begin(*p); q!=end(*p); q++)
			cout<<*q<<" ";
		cout<<endl;
	}

	return 0;
}
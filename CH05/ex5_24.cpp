#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{


	int a=1,b=0;
	
	if(b==0)
	{
		throw runtime_error("除数不能为0");
	}
	cout<<"两数相除的结果是："<<a/b<<endl;

	return 0;
}
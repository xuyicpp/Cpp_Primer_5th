#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char ca1 = {'H','e','l','l','o','\0'};
	char ca2 = "new life!";
	//利用strlen计算两个字符串的长度，求得结果字符串的长度
	int length = strlen(ca1) + strlen(ca2) - 1;

	char result[length];

	strcpy(result,ca1);	//拷贝
	strcat(result,ca2);	//拼接

	cout<<"之前的字符串是:"<<ca1<<"和"<<ca2<<endl;
	cout<<"拼接后字符串是:"<<result;

	return 0;
}
#include <iostream>
#include <vector>
#include "ex6.h"

using namespace std;

int main()
{
	int i=5,j=10;
	decltype(a) *p1=a,*p2=b,*p3=c,*p4=d;
	vector<decltype(a) *> v={p1,p2,p3,p4};
	for(auto p : v)
	{
		compute(i,j,p);
	}

	return 0;
}

int a(int a, int b)
{
	return a+b;
}
int b(int a, int b)
{
	return a-b;
}
int c(int a, int b)
{
	return a*b;
}
int d(int a, int b)
{
	return a/b;
}
void compute(int a, int b, int (*p)(int, int))
{
	cout<<p(a,b)<<" ";
}
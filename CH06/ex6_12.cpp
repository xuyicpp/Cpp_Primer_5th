#include <iostream>
#include "ex6.h"

using namespace std;

int main()
{
	int a=1,b=2;
	cout<<"Before swap a b:"<<a<<" "<<b<<endl;
	mySWAP(a,b);
	cout<<"After swap a b:"<<a<<" "<<b<<endl;
	return 0;
}

void mySWAP(int &a, int &b)
{
	int temp = 0;
	temp = a;
	a=b;
	b = temp;
}
#include <iostream>
#include <cctype>
#include <string>
#include "ex6.h"

using namespace std;

int main()
{
	string s{"AAA"};
	cout<<"Original string:"<<s<<"hasUP? "<<hasUP(s);
	downString(s);
	cout<<" tolower :"<<s;
	return 0;
}

bool hasUP(const string &s)
{
	for(auto a: s )
	{
		if(isupper(a))
			return true;
	}
	return false;
}

void downString(string &s)
{
	for(auto &a: s)
	{
		a=tolower(a);
	}
	return;
}
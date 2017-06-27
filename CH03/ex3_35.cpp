#include <iostream>

int main()
{
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	for(auto i : a)
		cout<<i<<" ";

	int *ibeg = begin(a);
	int *iend = end(a);
	while(ibeg != iend)
	{
		*ibeg = 0;
		++ibeg;
	}

	for(auto i : a)
		cout<<i<<" ";
	
	return 0;
}
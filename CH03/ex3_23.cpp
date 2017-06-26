#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc==1)			//quit if no argument
	{
		cerr<<"Usage: "<<argv[0]<<" filename[s]\n";
		exit(EXIT_FAILURE);
	}
	
	int i;
	vector<int> vint;

	for(int file=1;file<argc;file++)
	{
		ifstream fin;		//open stream
		fin.open(argv[file]);

		while(fin>>i)
			vint.push_back(i);

		fin.clear();
		fin.close();
	}

	for(auto it=vint.begin();it != vint.end();it++)
		*it=2*(*it);

	for(auto it=vint.begin();it != vint.end();it++)
		cout<<*it<<" ";
	
	return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc==1)			//quit if no argument
	{
		cerr<<"Usage: "<<argv[0]<<" filename[s]\n";
		exit(EXIT_FAILURE);
	}
	
	string str1;
	vector<string> vstr;

	for(int file=1;file<argc;file++)
	{
		ifstream fin;		//open stream
		fin.open(argv[file]);

		while(fin>>str1)
			vstr.push_back(str1);

		fin.clear();
		fin.close();
	}

	for(auto s : vstr)		//C++11
	{
		for(auot &c ：s)
			c=toupper(c);
		cout<<s<<endl;
	}

	return 0;
}
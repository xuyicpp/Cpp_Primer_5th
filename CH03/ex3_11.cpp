#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc==1)			//quit if no argument
	{
		cerr<<"Usage: "<<argv[0]<<" filename[s]\n";
		exit(EXIT_FAILURE);
	}
	
	string str,str1;

	for(int file=1;file<argc;file++)
	{
		ifstream fin;		//open stream
		fin.open(argv[file]);
		getline(fin,str);

		for(auto c : str)
		{
			if(!ispunct(c))
			str1 += c;
		}

		fin.clear();
		fin.close();
	}

	cout<<str1<<endl;

	return 0;
}
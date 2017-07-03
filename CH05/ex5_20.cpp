#include <iostream>
#include <fstream>
#include <cstdlib>		//for exit()
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc==1)			//quit if no argument
	{
		cerr<<"Usage: "<<argv[0]<<" filename[s]\n";
		exit(EXIT_FAILURE);
	}

	string temp,lastOne;

	for(int file=1;file<argc;file++)
	{
		ifstream fin;		//open stream
		fin.open(argv[file]);

		fin>>lastOne;
		while(fin>>temp)
		{
			if(temp==lastOne)
				break;
			else
				lastOne=temp;
		}

		fin.clear();
		fin.close();
	}

	if(temp==lastOne)
		cout<<"the same word is :"<<lastOne;
	else
		cout<<"no words repeat twice.";

	return 0;
}
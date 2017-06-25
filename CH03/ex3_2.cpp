#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc==1)			//quit if no argument
	{
		cerr<<"Usage: "<<argv[0]<<" filename[s]\n";
		exit(EXIT_FAILURE);
	}
	
	string str1,str2;

	for(int file=1;file<argc;file++)
	{
		ifstream fin;		//open stream
		fin.open(argv[file]);

		if (file==1)
		while(getline(fin,str1))
			cout<<str1<<endl;

		if(file==2)
		while(fin>>str2)
			cout<<str2<<endl;
	}

	fin.clear();
	fin.close();
}
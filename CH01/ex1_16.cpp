#include <iostream>
#include <fstream>
#include <cstdlib>		//for exit()

int main(int argc, char *argv[])
{
	using namespace std;
	if(argc==1)			//quit if no argument
	{
		cerr<<"Usage: "<<argv[0]<<" filename[s]\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin;		//open stream
	long count;
	long total = 0;
	int in;


	for(int file=1;file<argc;file++)
	{
		fin.open(argv[file]);
		while(fin>>in)
		{
			cout<<in<<endl;
		}
		total += in;
		fin.clear();
		fin.close();
	}
	cout<<"All int's value in all files is "
	<<total<<endl;

	return 0;
}
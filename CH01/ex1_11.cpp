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
	int min=40,max=0,in;


	for(int file=1;file<argc;file++)
	{
		fin.open(argv[file]);
		while(fin>>in)
		{
			if(in>max)
				max=in;
			if(in<min)
				min=in;
		}
		fin.clear();
		fin.close();
	}
	for(int i=min+1;i<max;i++)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
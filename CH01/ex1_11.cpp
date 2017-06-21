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

	int v1,v2;

	for(int file=1;file<argc;file++)
	{
		fin.open(argv[file]);
		
		fin>>v1>>v2;

		fin.clear();
		fin.close();
	}
	
	if(v1>v2)
		while(v1>=v2)
		{
			cout<<v1<<" ";
			v1--;
		}
	else
		while(v1<=v2)
		{
			cout<<v1<<" ";
			v1++;
		}
	cout<<endl;
	return 0;
}
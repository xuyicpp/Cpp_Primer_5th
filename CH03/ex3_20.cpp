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
	vector<int> vi;

	for(int file=1;file<argc;file++)
	{
		ifstream fin;		//open stream
		fin.open(argv[file]);

		while(fin>>i)
			vi.push_back(i);

		fin.clear();
		fin.close();
	}

	for(decltype(vi.size()) begin=0,end=vi.size()-1;
		begin<=end ; begin++,end--)
		cout<<vi[begin]+vi[end]<<" ";

	return 0;
}
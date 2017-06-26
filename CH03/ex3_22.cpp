#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc==1)			//quit if no argument
	{
		cerr<<"Usage: "<<argv[0]<<" filename[s]\n";
		exit(EXIT_FAILURE);
	}
	
	string str;

	for(int file=1;file<argc;file++)
	{
		ifstream fin;		//open stream
		fin.open(argv[file]);

		getline(fin , str)

		fin.clear();
		fin.close();
	}

	for(auto it = str.begin(); it != str.end() ; ++it)
		*it = toupper(*it);		//将当前字符改成大写形式

	cout<<str<<endl;

	return 0;
}
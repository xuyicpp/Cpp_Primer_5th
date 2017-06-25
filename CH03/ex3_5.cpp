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
	
	string str,str1,str2;

	for(int file=1;file<argc;file++)
	{
		ifstream fin;		//open stream
		fin.open(argv[file]);
		fin>>str;
		str1=str;
		str2=str;
		while(fin>>str)
		{
			str1+=str;
			str2=str2+" "+str;
		}

		fin.clear();
		fin.close();
	}
	cout<<str1<<endl;
	cout<<str2<<endl;

	return 0;
}
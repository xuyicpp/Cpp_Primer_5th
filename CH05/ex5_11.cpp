#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc==1)			//quit if no argument
	{
		cerr<<"Usage: "<<argv[0]<<" filename[s]\n";
		exit(EXIT_FAILURE);
	}

	char temp;
	int vowelCnt=0,spaceCnt=0,tabCnt=0,enterCnt=0;

	for(int file=1;file<argc;file++)
	{
		ifstream fin;		//open stream
		fin.open(argv[file]);
		while(fin>>temp)
		{
			switch(ch)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					++vowelCnt;
					break;
				case ' ':
					++spaceCnt;
					break;
				case '\t':
					++tabCnt;
					break;
				case '\n':
					++enterCnt;
					break;
				default:
					break;
			}
		}
	}

	cout<<"the number of vowelCnt is:"<<vowelCnt<<endl;
	cout<<"the number of space \\t \\n is:"<<

	return 0;
}
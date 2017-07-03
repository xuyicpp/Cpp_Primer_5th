#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>		//for exit()
#include "Sales_data.h"

using namespace std;

int main(int argc, char *argv[])
{
	if(argc==1)			//quit if no argument
	{
		cerr<<"Usage: "<<argv[0]<<" filename[s]\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin;		//open stream
	Sales_data data1,data2;
	double price = 0;	//书的单价，用于计算销售收入

	for(int file=1;file<argc;file++)
	{
		fin.open(argv[file]);
		
	//读入第一笔交易：ISBN、销售数量、单价
	fin>>data1.bookNo>>data1.units_sold>>price;
	//计算销售收入
	data1.revenue = data1.units_sold * price;
	//读入第二笔交易：ISBN、销售数量、单价
	fin>>data2.bookNo>>data2.units_sold>>price;
	//计算销售收入
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold+data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		//输出：ISBN、总销售量、总销售额、平均价格
		cout<<data1.bookNo<<" "<<totalCnt
			<<" "<<totalRevenue<<" ";
		if(totalCnt != 0)
			cout<<totalRevenue/totalCnt <<endl;
		else
			cout<<"(no sales)" << endl;
		return 0;
	} 
	else 
	{
		cerr<<"Data must refer to the same ISBN"<<endl;
		return -1;		//标示失败
	}

		fin.clear();
		fin.close();
	}	
	


	

}
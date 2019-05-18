#include <iostream>
#include <string>
#include <fstream>
#include "Line.h"
#include <stdlib.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop mm */

int main(int argc, char** argv) 
{
	
	string input = "220.243.135.5 - - [18/May/2019:00:00:00 +0200] \"GET /api/v1/login/?username=admin&password=1234 HTTP/1.1\" 200 16981";
	cout << input << endl;
	Line *line = new Line(input);
	
	cout << "Ip Address: "<< line->getIpAddress() << endl;
	
	cout << "Timestamp: " << line->getTimestamp() << endl;

	cout << "Request: " << line->getRequest() << endl;
	
	cout << "Status: " << line->getStatus() << endl;
	
	cout << "Bytes: " << line->getBytes() << endl;
	
//	int i,count=0;
//	string line,lone,jesus[i];
//	ifstream   fin("website-access.log.1");
//	fin>> line;
//	cout<<line<<endl;
//	for(i=0;i<9000;i++)
//	{
//		jesus[i]=line;
//		fin>>line;
//		count++;
//	}
//	cout<<count<<endl;
//	fin.close();
//	return 0;
}

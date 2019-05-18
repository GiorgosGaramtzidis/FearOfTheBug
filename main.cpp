#include <iostream>
#include <string>
#include <fstream>
#include "Line.h"
#include <stdlib.h>
#define N 9000
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop mm */

int main(int argc, char** argv) 
{
	ifstream   fin("website-access.log.1");
	string input,pin1[N],pin2[N],pin3[N];
	int i,pin4[N],pin5[N];
	double sbytes;
	
	fin >> input;
	Line *line = new Line(input);
	
	i = 0;
	sbytes = 0;
	
	if(fin.is_open())
	{
		while(getline(fin,input))
		{
			
			pin1[i] = line->getIpAddress();
		    pin2[i] = line->getTimestamp();
		    pin3[i] = line->getRequest();
		    pin4[i] = line->getStatus();
		    pin5[i] = line->getBytes();
		    i++;
		    sbytes = pin5[i] + sbytes;
			cout << pin1[i] << endl;
			
		}
		fin.close();
	}
	
	cout << sbytes/1000000 << endl;
	
	/*cout << input << endl;
	
	cout << "Ip Address: "<< line->getIpAddress() << endl;
	
	cout << "Timestamp: " << line->getTimestamp() << endl;

	cout << "Request: " << line->getRequest() << endl;
	
	cout << "Status: " << line->getStatus() << endl;
	
	cout << "Bytes: " << line->getBytes() << endl;*/
	
	
	
	
//	int i,count=0;
//	string line,lone,jesus[i];
//	ifstream   fin("website-access.log.1");
//	fin>> line;
//	cout<<line<<endl;
//	for(i=0;i<9000;i++)
//	{
//		jesus[i]=line;
//		  pin2[i].getTimestamp();
//	  pin3[3].getRequest();
//	  pin4[4].getStatus();
//	  pin5[].getBytes();
//	  pin1[i]	fin>>line;
//		count++;
//	}
//	cout<<count<<endl;
//	fin.close();
//	return 0;
}

#include "Line.h"
#include <stdlib.h>
using namespace std;

	Line::Line(string line) {
		size_t firstSpace = line.find(" ",0);
		size_t secondSpace = line.find(" ",firstSpace+1);
		size_t thirdSpace = line.find(" ",secondSpace+1);
		size_t fourthSpace = line.find(" ",thirdSpace+1);
		size_t fifthSpace = line.find(" ",fourthSpace+1);
		size_t sixSpace = line.find(" ",fifthSpace+1);
		size_t sevenSpace = line.find(" ",sixSpace+1);
		size_t eightSpace = line.find(" ",sevenSpace+1);
		size_t nineSpace = line.find(" ",eightSpace+1);
		
		ipAddress = line.substr(0,firstSpace);
		timestamp = line.substr(thirdSpace+1,(fifthSpace-(thirdSpace+1)));
		request = line.substr(fifthSpace+1,(eightSpace-(fifthSpace+1)));
		status = atoi(line.substr(eightSpace+1,(nineSpace-(eightSpace+1))).c_str());
		bytes = atoi(line.substr(nineSpace+1).c_str());	
		lone = line.substr(0);
	}
			
	string Line::getIpAddress() 
	{
		return ipAddress;
	}
	
	string Line::getTimestamp()
	{
		return timestamp;
	}
	
	string Line::getRequest()
	{
		return request;
	}
	
	int Line::getStatus()
	{
		return status;
	}
	
	int Line::getBytes()
	{
		return bytes;
	}
	
	string Line::getLone()
	{
		return lone;
	}

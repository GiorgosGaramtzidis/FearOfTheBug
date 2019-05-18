#include <iostream>
#include <string>
#include <fstream>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int i,count=0;
	string line,lone,jesus[i];
	ifstream   fin("website-access.log.1");
	fin>> line;
	cout<<line<<endl;
	for(i=0;i<9000;i++)
	{
		jesus[i]=line;
		fin>>line;
		count++;
	}
	cout<<count<<endl;
	fin.close();
	return 0;
}

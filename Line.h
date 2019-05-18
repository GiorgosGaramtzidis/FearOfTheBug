#include <string>
#include <stdlib.h>
using namespace std;
class Line {
	private:
			string ipAddress;
			string unknown;
			string unknown2;
			string timestamp;
			string request;
			int status;
			int bytes;
			string lone;
	public:
			Line(string line);
			string getIpAddress();
			string getTimestamp();
			string getRequest();
			int getStatus();
			int getBytes();
			string getLone();
};

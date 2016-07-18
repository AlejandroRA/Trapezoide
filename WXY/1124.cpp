#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
	string cad;
	while(getline(cin,cad))
	{
		cout << cad<<endl;
	}
	return 0;
}
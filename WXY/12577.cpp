#include <iostream>
#include <cstdio>

using namespace std;


int main(int argc, char const *argv[])
{
	string cad;
	int i = 1;
	while(cin >> cad)
	{
		if(cad == "*")
			break;
		else if(cad == "Hajj")
			cout <<"Case "<<i<<": " << "Hajj-e-Akbar"<<endl;
		else if(cad == "Umrah")
			cout <<"Case "<<i<<": " << "Hajj-e-Asghar"<<endl;
		i++;

	}
	return 0;
}
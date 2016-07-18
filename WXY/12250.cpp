#include <iostream>
#include <cstdio>

using namespace std;


int main(int argc, char const *argv[])
{
	string cad;
	int i = 1;
	while(cin >> cad)
	{
		if(cad == "#")
			break;
		else if(cad == "HELLO")
			cout << "Case "<<i<<": ENGLISH"<<endl;

		else if(cad == "HOLA")	
			cout << "Case "<<i<<": SPANISH"<<endl;

		else if(cad == "HALLO")
			cout << "Case "<<i<<": GERMAN"<<endl;
		
		else if(cad == "BONJOUR")
			cout << "Case "<<i<<": FRENCH"<<endl;
		
		else if(cad == "CIAO")
			cout << "Case "<<i<<": ITALIAN"<<endl;
		
		else if(cad == "ZDRAVSTVUJTE")
			cout << "Case "<<i<<": RUSSIAN"<<endl;
        else
  			cout << "Case "<<i<<": UNKNOWN"<<endl;

       i++;
		
	}
	return 0;
}
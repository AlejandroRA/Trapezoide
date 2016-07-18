#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>

using namespace std;


int main(int argc, char const *argv[])
{

	string cad;
    while(getline(cin,cad) , cad != "DONE")
    {
    	string aux = "";
    	for (int i = 0; i < cad.size(); ++i)
    	{
    	    if(cad[i] == ' ' || cad[i] == '.' || cad[i] == ',' || cad[i] == '!' || cad[i] == '?')
    	    	continue;

    	    aux += toupper(cad[i]);
    	}
    	cad = aux;
    	reverse(aux.begin(),aux.end());
    	if(cad != aux)
    		cout << "Uh oh.."<<endl;
    	else
    		cout << "You won't be eaten!"<<endl;

    }
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

char perro[10];

int main(int argc, char const *argv[])
{
	
	int a;
	 cin >> a;
	 sprintf(perro,"%d",a);
	 string cad = string(perro);
	 cad += "does";
	 cout << cad;
	 cout << endl << cad.size();
	return 0;
}
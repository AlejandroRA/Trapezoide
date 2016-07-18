#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;


map<char, char> mapa;

void init()
{
	mapa['A'] = 'A';
	mapa['E'] = '3';
	mapa['H'] = 'H';
	mapa['I'] = 'I';
	mapa['J'] = 'L';
	mapa['L'] = 'J';
	mapa['M'] = 'M';
	mapa['O'] = 'O';
	mapa['S'] = '2';
	mapa['T'] = 'T';
	mapa['U'] = 'U';
	mapa['V'] = 'V';
	mapa['W'] = 'W';
	mapa['X'] = 'X';
	mapa['Y'] = 'Y';
	mapa['Z'] = '5';
	mapa['1'] = '1';
	mapa['2'] = 'S';
	mapa['3'] = 'E';
	mapa['5'] = 'Z';
	mapa['8'] = '8';
}	
bool mirror(string cad)
{
	string aux = cad;
	for (int i = 0; i < aux.size(); ++i)
		aux[i] = mapa[cad[i]];
	reverse(aux.begin(),aux.end());
	if(cad != aux)
		return false;
	return true;
			
	
}
bool palindrome(string cad)
{
	string aux = cad;
	reverse(aux.begin(),aux.end());
	if(cad != aux)
		return false;
	return true;
}
int main(int argc, char const *argv[])
{
	bool m,p;
	string cad;
	mapa.clear();
	init();
	while( cin >> cad)
	{
		m = mirror(cad);
		p = palindrome(cad);
		if(m && p)
			cout << cad <<" -- is a mirrored palindrome."<<endl<<endl;
		else if(m)
			cout << cad << " -- is a mirrored string."<<endl<<endl;
		else if(p)
			cout << cad <<  " -- is a regular palindrome."<<endl<<endl;
		else
			cout << cad << " -- is not a palindrome."<<endl <<endl;

	}
	return 0;
}

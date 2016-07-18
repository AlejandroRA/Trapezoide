#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>

using namespace std;

typedef vector <char> vc;
typedef vector <vc> vcc;


string baseString(string cad)
{
	string aux = "";
	for (int i = 0; i < cad.size(); ++i)
	{
		if(cad[i] == ' ' || cad[i] == ',' || cad[i] == '.' || cad[i] == '?'  || cad[i] == '!' || cad[i] == '(' ||cad[i] == ')')
			continue;
		aux+=cad[i];
	}
	return aux;
}

string one(vcc matriz, int limit)
{
	string aux = "";
	for (int i = 0; i < limit; ++i)
	{
		for (int j = 0; j < limit; ++j)
		{
			aux+= matriz[i][j];
		}
	}
	return aux;
}

string two(vcc matriz, int limit)
{
	string aux = "";
	for (int i = 0; i < limit; ++i)
	{
		for (int j = 0; j < limit; ++j)
		{
			aux+= matriz[j][i];
		}
	}
	return aux;
}

string three(vcc matriz, int limit)
{

	string aux = "";
	for (int i = limit -1; i >= 0; --i)
	{
		for (int j = limit -1; j >= 0; --j)
		{
			aux+= matriz[i][j];
		}
	}
	return aux;
}

string four(vcc matriz, int limit)
{
	string aux = "";
	for (int i = limit -1; i >= 0; --i)
	{
		for (int j = limit -1; j >= 0; --j)
		{
			aux+= matriz[j][i];
		}
	}
	return aux;
}




int main(int argc, char const *argv[])
{
	int N;
	vcc matriz;
	vc fila;

	string cad;
	cin >> N;
	cin.get();
	int i = 1;
	while(N--)
	{
		matriz.clear();
		getline(cin,cad);
		cad = baseString(cad);
		double p = sqrt(float(cad.size()));
		if((p * p ) != cad.size())
		{
			cout << "Case #" << i++<<":"<<endl;
			cout << "No magic :(" << endl;
			continue;
		}
		int limit = (int)p;
		for (int z = 0; z < cad.size(); )
		{
			fila.clear();
			for (int x = 0; x < limit; ++x)
			{
				fila.push_back(cad[z++]);
			}
			matriz.push_back(fila);
		}

		if( cad == one(matriz,limit) && cad == two(matriz,limit)  && cad == three(matriz,limit)  && cad == four(matriz,limit) )
		{
				cout << "Case #" << i++<<":"<<endl;
			cout << limit << endl;
		
		}
		else
		{
					cout << "Case #" << i++<<":"<<endl;
			cout << "No magic :(" << endl;
		

		}




	}
	return 0;
}
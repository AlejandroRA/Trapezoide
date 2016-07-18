#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

typedef vector <int> vi;
typedef vector <vi> vii;

bool validate(vii m)
{
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			if(m[i][j] > 0)
				return true;
	return false;
}

vii transform(vii m)
{
	vii r;
	vi line;
	r.clear();
	line.clear();
	int g[9];
	g[0] = (m[0][1] + m[1][0])%2;
	g[1] = (m[0][0] + m[1][1] + m[0][2])%2;
	g[2] = (m[0][1] + m[1][2])%2;
	g[3] = (m[0][0] + m[1][1] + m[2][0])%2;
	g[4] = (m[0][1] + m[1][0] + m[1][2] + m[2][1])%2;
	g[5] = (m[0][2] + m[1][1] + m[2][2] )%2;
	g[6] = (m[1][0] + m[2][1])%2;
	g[7] = (m[2][0] + m[1][1] + m [2][2])%2;
	g[8] = (m[1][2] + m[2][1])%2;
	int z = 0;
	for (int i = 0; i < 3; ++i)
	{
		line.clear();
		for (int j = 0; j < 3; ++j)
		{
			line.push_back(g[z++]);
		}
		r.push_back(line);
	}
	return r;
	
}

vi changeInt(string cad)
{
	vi aux;
	aux.clear();
	for (int i = 0; i < 3; ++i)
	{
		aux.push_back(cad[i] - '0');
	}
	return aux;
}

int main(int argc, char const *argv[])
{
	int t,aux, index;
	vii matriz;
	vi line;
	string cad;
	cin >> t;
	while( t-- )
	{
		cin.get();
		matriz.clear();
		line.clear();   
		for (int i = 0; i < 3; ++i)
		{
			cin >> cad;
			line = changeInt(cad);
			matriz.push_back (line);
		}
		int ans = -1;
		while(validate(matriz))
		{
			matriz = transform(matriz);
			ans ++;
		}
		cout << ans << endl;
	}
	return 0;
}
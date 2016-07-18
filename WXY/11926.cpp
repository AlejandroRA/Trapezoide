#include <iostream>
#include <bitset>
#include <cstring>
#include <vector>


using namespace std;

typedef vector <int> vi;
bitset < 1000001 > dominio; 

bool valuate(int once, int repeated, vi comienzo, vi fin, vi rango)
{
	/*un solo*/
	int i;
	for ( i = 0; i < once; ++i)
	{
		
		for (int j = comienzo[i]+1; j <= fin[i] && j <=1000000 ; ++j)
		{
	//		cout << j << endl;
			if(dominio.test(j))
				return true;
			else
				dominio.flip(j);
		}
	}
	/*repidos*/
	for (; i < repeated + once ; ++i)
	{
		int s = comienzo[i];
		int e = fin[i];
		int r = rango[i];
		while( s < 1000000)
		{
			for (int j = s+1; j <= e && j <= 1000000; ++j)
			{
				if(dominio.test(j))
					return true;
				else
					dominio.flip(j);
			}
			s += r;
			e += r;
		}
	}
	return false;
}


int main(int argc, char const *argv[])
{
	int once, repeated;
	int s,e,r;
	vi comienzo, fin, rango;
	while(cin >> once >> repeated, once || repeated)
	{
		comienzo.clear();
		fin.clear();
		rango.clear();
		dominio.reset();
		for (int i = 0; i < once; ++i)
		{
			cin >> s >> e;
			comienzo.push_back(s);
			fin.push_back(e);
			rango.push_back(0);
		}
		for (int i = 0; i < repeated; ++i)
		{
			cin >> s >> e >> r;
			comienzo.push_back(s);
			fin.push_back(e);
			rango.push_back(r);
		}

		if(valuate(once, repeated, comienzo, fin, rango))
			cout << "CONFLICT" <<endl;
		else
			cout << "NO CONFLICT" << endl;
	}
	return 0;
}
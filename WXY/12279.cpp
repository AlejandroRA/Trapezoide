#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	int aux;
	int sun;
	int res;
	int i = 1;
	while(scanf("%d",&N),N)
	{
		sun = 0;
		res = 0;

		while(N--)
		{
			cin >> aux;
			if(aux == 0)
				res ++;
			else
				sun++;

		}
		cout <<"Case "<<i<<": "<< sun - res << endl;
		i++;
	}
	return 0;
}
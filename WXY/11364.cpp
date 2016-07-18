#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	int n;
	int aux;
	int may;
	int min;
	cin >> N;
	while(N--)
	{
		may = 0;
		int min = 99;
		cin >> n;
		while(n--)
		{
			cin >> aux;
			if(aux > may)
				may = aux;
			if(aux < min)
				min = aux;
		}
		cout << (may - min )* 2<<endl;
	}
	return 0;
}
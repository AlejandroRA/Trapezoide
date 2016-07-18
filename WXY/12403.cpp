#include <cstdio>
#include <iostream>

using namespace std;

typedef long long int ll;

int main(int argc, char const *argv[])
{
	ll donate = 0;
	ll aux;
	int N;
	string cad;
	cin >> N;
	while(N--)
	{

		cin >> cad;
		if(cad == "donate")
		{
			cin >> aux;
			donate += aux;
		}
		else if(cad == "report")
		{
			cout << donate << endl;
		}
	}
	return 0;
}
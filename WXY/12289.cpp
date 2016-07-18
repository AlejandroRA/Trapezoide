#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string uno = "one";
	int N;
	int euno;
	string cad;
	cin >> N;
	while(N--)
	{
		euno = 0;
		cin >> cad;
		if(cad.size() == 5)
		{
			cout << 3 <<endl;
		}
		else
		{
			for (int i = 0; i < cad.size(); ++i)
			{
				if(cad[i] != uno[i])
					euno++;
			}
			if(euno <= 1)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}

	}

	return 0;
}
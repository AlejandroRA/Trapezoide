#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

std::vector<string> v;

int main(int argc, char const *argv[])
{
	int N;
	int c;
	int pos;
	string cad;
	cin >> N;
	while(N--)
	{
		cin >> c;
		pos = 0;
		v.clear();
		//cin.ignore(INT_MAX);
		cin.get();
		for (int i = 0; i < c; ++i)
		{
			getline(cin,cad);
			v.push_back(cad);
			if(cad == "LEFT")
			{
				pos--;
			}
			else if(cad == "RIGHT")
			{

				pos++;
			}
			else
			{
				while(cad != "LEFT"  && cad != "RIGHT")
				{
					string aux = cad.substr(8);
					int num = atoi(aux.c_str()) -1;
					cad = v[num];
					if(cad == "LEFT")
					{
						pos--;
					}
					else if(cad == "RIGHT")
					{
						pos++;
					}
			
				}
			}

		}
		cout << pos << endl;
	}

	return 0;
}
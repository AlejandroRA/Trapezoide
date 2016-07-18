#include <iostream>
#include <list>
#include <string>

using namespace std;


list <char> lista;
list <char> :: iterator it;


int main(int argc, char const *argv[])
{	

	string line;
	while( cin >> line)
	{
		int band = 0;
		lista.clear();
		for (int i = 0; i <line.size(); ++i)
		{
			if(line[i] == '[')
			{
				it = lista.begin();
				band = 1;
				continue;
			}
			if(line[i] == ']')
			{
				band = 0;
				continue;
			}
			if(band == 0)
			{
				lista.push_back(line[i]);
			}
			if(band == 1)
			{
				lista.insert(it,line[i]);

			}
		}
		for ( it = lista.begin(); it != lista.end(); it++)
		{
			cout << *it;
		}
		cout << endl;
	}
	return 0;
}
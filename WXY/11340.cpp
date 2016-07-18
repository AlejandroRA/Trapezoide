#include <iostream>
#include <map>
#include <vector>
#include <utility>

using namespace std;

typedef pair <double,double> data;

map<char, data> mapa;
vector <char> characters;

int main(int argc, char const *argv[])
{
	int N;
	int size;
	string line;
	char simbol;
	double cost;
	double sum;
	cin >> N;
	while(N--)
	{
		sum = 0.0;
		mapa.clear();
		characters.clear();
		cin >> size;
		while(size--)
		{
			cin >> simbol >> cost;
			mapa[simbol] = make_pair (cost/100.0,0.0);
			characters.push_back(simbol);
		}
		cin >> size;
		cin.get();
		while(size--)
		{
			getline(cin,line);
			for (int i = 0; i < line.size(); ++i)
			{
				if(mapa.count(line[i])>0)
				{
					mapa[line[i]].second += mapa[line[i]].first;
				}
			}
		}
		for (int i = 0; i < characters.size(); ++i)
		{
			sum += mapa[characters[i]].second;
		}
		printf("%.2lf$\n",sum );
	}
	return 0;
}
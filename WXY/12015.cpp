#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

struct url
{
	string dir;
	int relevancia;
};

vector<url> v;

int main(int argc, char const *argv[])
{
	int N;
	int max;
	int i = 1;
	url aux;
	cin >> N;
	while(N--)
	{
		v.clear();
		max = 0;
		for (int i = 0; i < 10; ++i)
		{
			cin >> aux.dir >> aux.relevancia;
			if(aux.relevancia > max)
				max = aux.relevancia;
			v.push_back(aux); 
		}
		cout << "Case #"<<i++<<":"<<endl;
		for (int i = 0; i < v.size(); ++i)
		{
			if(v[i].relevancia == max)
			{
				cout << v[i].dir << endl;
			}
		}

	}
	return 0;
}
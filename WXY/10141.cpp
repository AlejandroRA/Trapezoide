#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;


struct propourse
{
	string name;
	int coincidence;
	float prize;
};

std::vector<propourse> v;

bool operator<(propourse a, propourse b)
{
	if(a.coincidence == b.coincidence)
		return a.prize < b.prize;
	else
		return a.coincidence < b.coincidence;
}

int main(int argc, char const *argv[])
{
	int n,p;
	int pp;
	string cad;
	propourse aux;
	int id = 1;
		
	while ( scanf("%d %d",&n,&p), n && p)
	{
			cin.get();
	
		
		for (int i = 0; i < n; ++i)
		{
			getline(cin,cad);
		}
		v.clear();
		for (int i = 0; i < p; ++i)
		{
			getline(cin,aux.name);
			cin >> aux.prize;
			cin >> pp;
			aux.coincidence = n - pp;
			cin.get();
	      
			for (int i = 0; i < pp; ++i)
			{
				getline(cin,cad);
			}
			v.push_back(aux);
		}
		sort(v.begin(),v.end());
		if(id > 1)
			cout << endl;
		cout << "RFP #"<< id++ <<endl;
		cout << v[0].name <<endl;

	}
	return 0;
}
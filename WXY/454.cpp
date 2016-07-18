#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

typedef vector<string> vs;

string baseString(string cad)
{
	cad.erase(remove(cad.begin(),cad.end(),' '),cad.end());
	sort(cad.begin(),cad.end());
	return cad;
}

bool anagram(string source, string md)
{
	if(baseString(source) == baseString(md))
		return true;
	return false;
}



int main(int argc, char const *argv[])
{
	int N;
	string cad;
	vs v;
	cin >> N;
	cin.ignore();
	cin.ignore();

	while(N--)
	{
		v.clear();
		while(getline(cin,cad), cad!="")
			v.push_back(cad);
		sort(v.begin(),v.end());
		for (int i = 0; i < v.size(); ++i)
		{
			for (int j = i+1; j < v.size(); ++j)
			{
				if(anagram(v[i],v[j]))
					cout << v[i] << " = " << v[j] << endl;
			}
		}
		if(N)
			cout << endl;
	}
	return 0;
}

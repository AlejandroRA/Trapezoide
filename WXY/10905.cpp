#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

vector <string> v;

bool comp(string a, string b)
{
	return a+b > b+a;
}

int main(int argc, char const *argv[])
{
	int N;
	string cad;
	while(cin >> N, N)
	{
		v.clear();
		while(N--)
		{
			cin >> cad;
			v.push_back(cad);
		}
		sort(v.begin(),v.end(),comp);
		for (int i = 0; i < v.size(); ++i)
			cout << v[i];
		cout << endl;
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

vector<int> v;

int main(int argc, char const *argv[])
{
	int reser;
	int bancos;
	int deudas;
	int a,b,c;
	while(scanf("%d %d",&bancos,&deudas) , bancos || deudas   )
	{
		bool test = true;
		v.clear();
		for (int i = 0; i < bancos; ++i)
		{
			cin >> reser;
			v.push_back(reser);
		}
		for (int i = 0; i < deudas; ++i)
		{
			cin >> a >> b >> c;
			v[a-1] -= c;
			v[b-1] += c;
		}
		for (int i = 0; i < v.size(); ++i)
		{
			if(v[i] < 0)
			{
				test = false;
			}
		}
		if(test)
		{
			cout << "S" << endl;
		}
		else
		{
			cout << "N" << endl;
		}
	}


	return 0;
}
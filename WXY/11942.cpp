#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

std::vector<int> v;

std::vector<int> rev;
std::vector<int> der;


int main(int argc, char const *argv[])
{
	int N;
	int aux;
	int actual;
	bool dat;
	cin >> N;
	cout << "Lumberjacks:"<<endl;
	while(N--)
	{
		dat = true;
		v.clear();
		for (int i = 0; i < 10; ++i)
		{
			cin >> aux;
			v.push_back(aux);
		}
		der = v;
		sort(der.begin(),der.end());
		rev = der;
		reverse(rev.begin(),rev.end());
		for (int i = 0; i < der.size(); ++i)
		{
			if(der[i] != v[i])
			{
				dat = false;
			}
		}
		if( !dat )
		{
			dat = true;
			for (int i = 0; i < rev.size(); ++i)
			{
				if(rev[i] != v[i])
				{
					dat = false;
				}
			} 
			if(!dat)
			{
				cout << "Unordered"<<endl;
			}
			else
			{
				cout << "Ordered" << endl;
			}
		}
		else
		{
			cout << "Ordered"<<endl;
		}
	}
	return 0;
}
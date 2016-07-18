#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

std::vector<int> v;
std::vector<int> v2;

int main(int argc, char const *argv[])
{
	int n;
	int a;
	bool jolly;
	while (cin >> n)
	{
		v.clear();
		v2.clear();
		while(n--)
		{
			cin >> a;
			v.push_back(a);
		}
		for (int i = 0; i < v.size()-1; ++i)
		{
			v2.push_back(abs(v[i]- v[i+1]));
		}
		jolly = true;
		sort(v2.begin(), v2.end());
		for (int i = 0; i < v2.size(); ++i)
		{
			if(v2[i] != (i+1))
			{
				jolly = false;
				break;
			}
		}
	
		if(jolly)
			cout << "Jolly" <<endl;
		else
			cout << "Not jolly" << endl;

	}
	return 0;
}
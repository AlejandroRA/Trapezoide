#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	int max_sum ;
	vector<int> v;
	while(cin >> N)
	{
		max_sum = 0;
		v.clear();
		int dat[1 << N];
		for (int i = 0; i < (1 << N); ++i)
		{
			cin >> dat[i];
		}

		int aux;
		for (int i = 0; i < (1 << N); ++i)
		{
			aux = 0;
			for (int j = 0; j < N; ++j)
			{
				aux += dat[i ^ (1 << j)];
			}
			v.push_back(aux);
		}

		for (int i = 0; i < (1 << N); ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				max_sum = max(max_sum,v[i ^ (1 << j)]+v[i]);
			}
			
		}

		cout << max_sum<<endl;
	}
	return 0;
}
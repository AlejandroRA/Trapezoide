#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	int jumps;
	int wall;
	int h,l;
	int aux;
    int actual;


	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		h = l = 0;
		cin >> wall;
		for (int i = 0; i < wall; ++i)
		{
			cin >> aux;
			if(i == 0)
			{
				actual = aux;
				continue;
			}
			if(aux < actual)
				l++;
			if(aux > actual)
				h++;
			actual = aux;


		}
		cout << "Case " << i+1 <<": " << h << " " << l << endl;

	}
	return 0;
}
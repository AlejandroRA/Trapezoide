#include <iostream>
#include <cstring>

using namespace std;


int main(int argc, char const *argv[])
{
	float N;
	float F;
	float s;
	float metro,cant,grado;
	float aux;
	cin >> N;
	while( N--)
	{
		cin >> F;
		s = 0;
		while(F--)
		{
			cin >> metro >> cant >> grado;
			s += ( ( (metro / cant) * grado ) * cant);
		//	cout << s <<endl;
		}
		cout << s << endl;
	}
	return 0;
}
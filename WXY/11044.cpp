#include <cstdio>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int N;
	int n,m;
	int colum;
	int filas;
	cin >> N;

	while(N--)
	{

		cin >> n >> m;
		n -=2;
		m -=2;
		colum = n/3;
		filas = m /3;
		n%3 != 0?colum =colum +1:colum = colum;
		m%3 != 0?filas = filas +1:filas = filas;
		cout << colum * filas << endl;

	}
	return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	int C;
	int minutos;
	int sumaUno;
	int sumaDos;
	cin >> N;
	int i = 1;
	while(N--)
	{
		sumaDos =  sumaUno = 0;
		cin >> C;
		for (int i = 0; i < C; ++i)
		{
			cin >> minutos;
			sumaUno +=  (((minutos/30) + 1) * 10);
			sumaDos +=  (((minutos/60) + 1) * 15);
		}
		if(sumaUno == sumaDos)
		{
			cout << "Case "<<i++<<": Mile Juice "<<sumaUno<<endl;
		}
		else if(sumaUno < sumaDos)
		{
		cout << "Case "<<i++<<": Mile "<<sumaUno<<endl;
	
		}
		else
		{
			cout << "Case "<<i++<<": Juice "<<sumaDos<<endl;
		}
	}
	return 0;
}
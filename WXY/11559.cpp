#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	bool ok;
	int min = 10000000;
	int persona, presupuesto, hoteles, semanas;
	int precio_p;
	int cama;
	while(cin >> persona >> presupuesto >> hoteles >> semanas)
	{
		ok = false;
		min = 10000000;
		for (int i = 0; i < hoteles; ++i)
		{
			ok = false;
			cin >> precio_p;
			for (int i = 0; i < semanas; ++i)
			{
				cin >> cama;
				if(persona <= cama)
					ok = true;
			}
			if(ok)
			{
				int aux = persona * precio_p;
				if(aux <= min && aux <= presupuesto)
					min = aux;
			}
			//cout << min << endl;
		}
			if(min != (10000000))
				cout << min<<endl;
			else
				cout << "stay home"<<endl;
		
	}
	return 0;
}
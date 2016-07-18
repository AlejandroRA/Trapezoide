#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;


struct depreciacion
{
	int id;
	long double devaluacion;
};

int main(int argc, char const *argv[])
{
	depreciacion anterior;
	long double monto_inicial, deuda;
	int meses, registros;
	while(cin >> meses >> monto_inicial >> deuda >> registros)
	{
		if(meses < 0 )
			break;
		depreciacion dev[registros];
		long double pago = deuda / (double)meses;
		long double deuda_monto = monto_inicial + deuda;
		for (int z = 0; z < registros; ++z)
		{
			cin >> dev[z].id >> dev[z].devaluacion;
		}

        int j = 0;
        int i;
        for (i = 0; i < meses; ++i)
        {
        	if(i == dev[j].id)
        	{
        		deuda_monto = deuda_monto - (deuda_monto * dev[j].devaluacion);
        		anterior = dev[j];
        		j++;
        	}
        	else 
        	{
        		deuda_monto = deuda_monto - (deuda_monto * anterior.devaluacion);

        	}

        	if(  deuda - (pago*i) < deuda_monto )
        	{
        		if( i == 1)

        		cout << i <<" month"<<endl;
        	else
        		cout << i <<" months"<<endl;
        		
        		break;
        	}
        }
        if(i == meses)
        cout << meses << " months"<<endl;
	}
	return 0;
}
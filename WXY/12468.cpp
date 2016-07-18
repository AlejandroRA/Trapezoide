#include <iostream>

using namespace std;


//index = (index + n - 1) % n
//index = (index + 1) % n;
int main(int argc, char const *argv[])
{
	int n = 100;
	int actual;
	int siguiente;
  	int u;
  	int d;
  	while(cin >> actual >> siguiente)
  	{
  		u = d = 0;
  		if(actual == -1 && siguiente == -1)
  		{
  			break;
  		}
  		int aux1,aux2;
  		aux1 = aux2 = actual;
  		while(aux1 != siguiente)
  		{
  			aux1 = (aux1 + n - 1) % n;
  			u ++;
  		}
		while(aux2 != siguiente)
  		{
  			aux2 = (aux2 + 1) % n;
  			d ++;
  		}
  		if( u == d)
  		{
  			cout << u << endl;
  		}
  		else if( u < d)
  		{
  			cout << u << endl;
  		}
  		else
  		{
  			cout << d<<endl;
  		}


  	}


	return 0;
}
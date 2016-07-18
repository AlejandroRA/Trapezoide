#include <iostream>
#include <set>

using namespace std;


int main(int argc, char const *argv[])
{
	int N;
	int d;
	int x,y;
	int k = 1;
	cin >> N;
	while(N--)
	{
		cin >> d;
		set <int> datos;
		while(d--)
		{
			cin >> x >> y;
			datos.insert( abs ( x - y) );
		}
		if(k > 1)
			cout << endl;
		if(datos.size() == 1)  
			cout << "yes"<<endl;
		else
			cout << "no"<<endl;
		k++;
		
	}
	return 0;
}
#include <iostream>
#include <stack>

using namespace std;

int  valida(int N)
{
	stack <int> pila;
	int index = 1;
	int val;
	pila.push(index++);
	for (int i = 1; i <= N;i++ )
	{
		//cout << i << endl;
		cin >> val;
		if(val == 0)
			return 0;
		if(pila.empty())
		{
			pila.push(index++);
		}
		while(pila.top() != val)
		{
			if(index < N)
			pila.push(index++);
			else 
				break;
		}
		if(!pila.empty())
		{
			if(pila.top() == val)
			{	
				pila.pop();
				continue;		
			}
		} 
	}
	if(pila.empty())
		return 1;
	else
		return 2;
}


int main(int argc, char const *argv[])
{
	int N;
	int res;
	while(cin >> N, N)
	{
		for(;;)
		{
			res = valida(N);
			if( res == 0)
				break;
			else if(res == 1)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		cout << endl;
	}
	return 0;
}
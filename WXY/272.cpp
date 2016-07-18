#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string cad;
	int op = 0;
	while(getline(cin,cad))
	{
		for(int i = 0; i < cad.size();i++)
		{
			if(cad[i] == '"'){	
			cad.erase(i,1);			
				if(op == 0)
					cad.insert(i,"``"),op = 1;
				else
					cad.insert(i,"''"),op = 0;
			}
		}
		
		cout << cad<<endl;
	}
	return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char const *argv[])
{
	string cad;
	while( cin >> cad, cad != "#")
	{
		if(next_permutation(cad.begin(),cad.end()))
			cout << cad << endl;
		else
			cout << "No Successor" << endl;
	}
	return 0;
}
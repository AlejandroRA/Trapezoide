#include <iostream>
#include <algorithm>
#include <cstring>
#include <cctype>

using namespace std;

bool comparacion(char a, char b)
{
	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}

int main(int argc, char const *argv[])
{
	string cad;
	int N;
	cin >> N;
    while( N-- )
    {
    	cin >> cad;
    	sort(cad.begin(), cad.end(),comparacion);
    	do {
    		cout << cad << endl;
  		} while ( next_permutation(cad.begin(), cad.end(),comparacion) );

    }
	return 0;
}
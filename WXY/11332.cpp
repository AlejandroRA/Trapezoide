#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

typedef long long int lld;


lld cuenta_digit(lld cad)
{
	lld s = 0;
	while(cad)
	{
		s += (cad %10);
		cad/=10;
	} 
	return s;
}

int main(int argc, char const *argv[])
{
	lld n;
	while(scanf("%lld",&n),n)
	{
	    while( n >= 10)
	    	n = cuenta_digit(n);
	    cout << n << endl;
	}
	return 0;
}
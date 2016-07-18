#include <cstdio>
#include <iostream>
using namespace std;


/*
int N; // using global variables in contests can be a good strategy
char x[110]; // make it a habit to set array size a bit larger than needed
int main() {
scanf("%d\n", &N);
while (N--) { // we simply loop from N, N-1, N-2, ..., 0
scanf("0.%[0-9]...\n", x); // ‘&’ is optional when x is a char array
// note: if you are surprised with the trick above,
// please check scanf details in www.cppreference.com
printf("the digits are 0.%s\n", x);
} } // return 0;*/
bool isDigit(char c)
{
	if(c <='9' && c >='0')
		return true;
	return false;
}
bool isLowerCase(char c)
{
	if(c <='z' && c>='a')
		return true;
	return false;
}
int main(int argc, char const *argv[])
{
	string cad;
	getline(cin,cad);
	for (int i = 0; i < cad.size(); i+=1)
	{
		if(isLowerCase(cad[i]) && isDigit(cad[i+1] ) && isDigit(cad[i+2]))
			cad[i] = cad[i+1] = cad[i+2] = '*',i+=3; 
	}
	cout << cad<<endl;
	return 0;
}
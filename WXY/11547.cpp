#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	int n;
	cin >> N;
	while(N--)
	{
		cin >> n;
		n =  abs( (((((((n * 567) / 9) + 7492) * 235) / 47) - 498 )%100 )/10);
		cout << n <<endl;
	}
	return 0;
}
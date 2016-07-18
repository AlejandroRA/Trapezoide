#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	int n,k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		cout << ((k^(k<<1))>>1)<<endl;
	}
	return 0;
}
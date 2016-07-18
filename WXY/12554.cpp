#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<string> v;

string cancion[] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"}; 

int main(int argc, char const *argv[])
{
	int N;
	string cad;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> cad;
		v.push_back(cad);
	}

	int total = ( N) + ( 16 -  (N - (( N/16 ) *  16)   ));
	//cout << total << endl;
	int indexP = 0;
	int indexC = 0;
 	for (int i = 0; i < total; ++i)
	{
		cout << v[indexP]<<": "<<cancion[indexC]<<endl;
		indexC = ( indexC + 1 )% 16;
		indexP = ( indexP + 1 )% N;
	}

	return 0;
}
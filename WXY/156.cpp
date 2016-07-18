#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
	string cad;
	map<string, int> modificado;
	map<string, string> originales;
    map<string, int> :: iterator it;
    vector<string> v;

	while(cin >> cad, cad != "#")
	{
		string temp = cad;
		transform(cad.begin(), cad.end() , cad.begin(), ::tolower); 
		sort(cad.begin(),cad.end());
		modificado[cad] ++;
		originales[cad] = temp;
	}

    for ( it = modificado.begin(); it != modificado.end(); it++)
    {
    	if(it -> second == 1)
    	{
    		v.push_back( originales[it -> first] );
    	}
    }
    sort(v.begin(),v.end());

    for (int i = 0; i < v.size(); ++i)
    {
    	cout << v[i] << endl;
    }

	return 0;
}
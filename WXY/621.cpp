#include <cstring>
#include <iostream>
#include <cstdio>

using namespace std;
/*
S = 1 or S = 4 or S = 78
• negative result S = S35
• experiment failed S = 9S4
• experiment not completed S = 190S
*/

int main(int argc, char const *argv[])
{
	string cad;
	int N;
	cin >> N;
	while(N--)
	{
		cin >> cad;
		if(cad == "1" || cad == "4" || cad == "78")
		{
			cout << "+"<<endl;
		}
		else if(cad[cad.size()-2] == '3' && cad[cad.size()-1] == '5')
		{
			cout << "-"<<endl;
		}
		else if(cad[0] == '9' && cad[cad.size()-1] == '4')
		{
			cout << "*"<<endl;
		}
		else if(cad.substr(0,3) == "190")
		{
			cout << "?"<<endl;
		}

	}
	return 0;
}
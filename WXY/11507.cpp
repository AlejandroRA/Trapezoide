#include <iostream>
#include <cstring>


using namespace std;


string movimiento(string pos,string nv)
{
	if(pos == "+x")
	{
		return nv;
	}
	if(pos == "-x")
	{
		if(nv[0] == '-')
			nv[0] = '+';
		else
			nv[0] = '-';
		return nv;
	}
	if(pos == "+y")
	{
		if(nv[1] == 'z')
			return pos;
		if(nv == "+y")
			return "-x";
		if(nv == "-y")
			return "+x";
	}
	if(pos == "-y")
	{
		if(nv[1] == 'z')
			return pos;
		if(nv == "+y")
			return "+x";
		if(nv == "-y")
			return "-x";
	}
	if(pos == "+z")
	{
		if(nv[1] == 'y')
			return pos;
		if(nv == "+z")
			return "-x";
		if(nv == "-z")
			return "+x";
	}
	if(pos == "-z")
	{
		if(nv[1] == 'y')
			return pos;
		if(nv == "+z")
			return "+x";
		if(nv == "-z")
			return "-x";
	
	}
return "";
}
int main(int argc, char const *argv[])
{
	int N;
	string cad;
	string pos ;
	while(cin >> N,N)
	{
		pos = "+x";
		for (int i = 0; i < (N-1); ++i)
		{
			cin >> cad;
			if(cad == "No")
				continue;
			pos = movimiento(pos,cad);
		}
		cout << pos << endl;
	}
	return 0;
}

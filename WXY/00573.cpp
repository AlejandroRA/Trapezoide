#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	double W,S,B,P;
	while(cin >> W >> S >> B >> P)
	{
		if(W == 0.0)
			break;
		double H = 0.0;
		double f = S * (P/100.0);
		int i;
		for(i = 1;;)
		{
			H += S;
			if(S > 0)
				S -=f;
			if(H > W) break;
			H -= B;
			if(H < 0 )  break;
			i++;
					
		}
		if(H < 0)
			printf("failure on day %d\n", i);
		else
			printf("success on day %d\n", i);
	}
	return 0;
}
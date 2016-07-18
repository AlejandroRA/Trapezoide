#include <cstdio>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int total = 0;
	int ini,uno,dos,tres;
	while(scanf("%d %d %d %d",&ini,&uno,&dos,&tres),(ini|uno |dos |tres ))
	{
		total = 0;
		for(;;)
		{
			if(ini == uno)
				break;
	
			ini = (ini + 40 - 1) % 40;
			total ++;
		}
		for(;;)
		{
			if(ini == dos)
				break;
	
			ini = (ini + 1 ) % 40;
			total ++;
		}
		for(;;)
		{
			if(ini == tres)
				break;
	
			ini = (ini + 40 - 1) % 40;
			total ++;
		}
		cout << 1080 + (total * 9) << endl;
	}
	return 0;
}
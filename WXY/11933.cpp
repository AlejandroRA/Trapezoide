#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int j,i;
	int a,b;
	while(scanf("%d",&n),n)
	{
		i = j = a = b = 0;
		while(n > 0)
		{

			if(1 & n)
			{
				if( j %2 )
					b |= (1 << i);
				else
					a |= (1 << i);
				
				j++;
			}
			i++;
			n = n >> 1;
		}
		printf("%d %d\n",a,b );
	}
	return 0;
}
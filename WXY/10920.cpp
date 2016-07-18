#include <iostream>
#include <cstring>

using namespace std;



int main(int argc, char const *argv[])
{
	long long int border, find;
	long long int val;
	long long int line, column;
	while(cin >> border >> find, border && find)
	{
		long long int i;
		long long int acum = 1;
		if(find != 1)
		{
			for (i = 3; i <= border; i+= 2)
			{
				acum += (i * 2) + ((i-2)*2);
				if( find <= acum)
					break;
			}
		    val = acum;
			
			for (long long int j = 0; j < 4; ++j)
			{
				if(find <= acum && find >= (acum - (i - 1)))
				{
					if(j == 0)
					{
						line = column = i;
						while(val != find)
						{
							line--;
							val--;
						}
							break;
					
					}
					if(j == 1)
					{
						line = 1;
						column = i;
						val -= (i - 1);
						while(val != find)
						{
							column--;
							val--;
						}
							break;
					
					}
					if(j == 2)
					{
						line = 1;
						column = 1;
						val -= ((i - 1)*2);
						
						while(val != find)
						{
							line++;;
							val--;
						}
						break;
					}
					if(j == 3)
					{
						line = i;
						column = 1;
						val -= ((i - 1)*3);
						while(val != find)
						{
							column++;
							val--;
						}
									
							break;
					}

				}
				acum = (acum - (i - 1));

			}
			line += ( border - i)/2;
			column += (border - i)/ 2;
			cout <<"Line = "<< line <<", column = " << column <<"."<< endl;
			
		}
		else 
		{
			if(border == 1)
			  cout <<"Line = "<< 1 <<", column = " << 1<<"." << endl;
		
	else{
			line = column = 1;
			line += ( border - 1)/2;
			column += (border - 1)/ 2;
			cout <<"Line = "<< line <<", column = " << column <<"."<< endl;
		}
		}

	}
	return 0;
}
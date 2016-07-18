#include <iostream>
#include <cmath>
#include <cstring>


using namespace std;

int direccion = 1;

void cambia_direccion()
{
  direccion++;
  if(direccion > 4)
    direccion = 1;
}
int x = 0;
int y = 0;
void regresa_valor()
{
  switch(direccion)
  {
    case 1:
    x--;
    break;
    case 2:
    y--;
    break;
    case 3:
    x++;
    break;
    case 4:
    y++;
    break;
  }
}

int main(int argc, char const *argv[])
{
  int s = 2;
  //int x,y;
  int n,m;
  cin >> n >> m;
  int aux = n*m;
  int matrizA[n][m];
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      matrizA[i][j] = 0;
    }
  }
  matrizA[0][0] = 1;
  while(s != aux + 1)
  {
    switch(direccion)
    {
      case 1:
      x++;
      break;
      case 2:
      y++;
      break;
      case 3:
      x--;
      break;
      case 4:
      y--;
      break;
    }
    if( x < 0 || x >= m || y < 0 || y >= n)
    {
      regresa_valor();
      cambia_direccion();
    }
    else
    {
      if(matrizA[y][x] != 0)
      {
        regresa_valor();
        cambia_direccion();
      }
      else
      {
        matrizA[y][x] = s;
        s++;
      }
    }

  }

  /////////////////
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cout << matrizA[i][j] << " ";
    }
    cout << endl;
  }
  

  return 0;
}
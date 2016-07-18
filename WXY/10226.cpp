#include <iostream>
#include <map>
#include <cstring>

using namespace std;

map<string, double> mapa;

int main()
{
  int N,s;
  string cad;
  cin >> N;
  getline(cin,cad);
  getline(cin,cad);

  while(N--)
  {
    mapa.clear();
    s = 0;
    while(getline(cin,cad),cad != "")
    {
      mapa[cad] ++;
      s++;
    }
    for (map<string, double>::iterator it = mapa.begin(); it != mapa.end(); it++) {
      cout << (string)it->first << " ";
      printf("%.4lf\n",((double)it-> second /s )* 100 );
    }
    if(N)
    cout << endl;
  }
}

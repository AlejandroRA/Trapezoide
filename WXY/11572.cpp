#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long int ll;
typedef map < ll, ll> mapsf;
typedef queue < ll > cola;
mapsf::reverse_iterator irt;
mapsf::iterator it;
cola col;
void clear()
{
  while(!col.empty())
  col.pop();
}
int main(int argc, char const *argv[]) {
  int N, snow,id;
//  anterior = 0;
  int count,maxi ;
  mapsf mapa;
  cin >> N;
  while(N--){
    count = 0;
    maxi = 0;
    int band = false;
    cin >> snow;
    clear();
    mapa.clear();
    while(snow--){

      cin >> id;
      if(mapa.count(id)>0)
      {
        maxi = max(maxi,(int)mapa.size());
        while(col.front() != id)
        {
          mapa.erase(col.front());
          col.pop();
        }
        mapa.erase(col.front());
        col.pop();
      }
      col.push(id);
      mapa[id] = 1;
    }
    cout << max(maxi,(int)mapa.size()) <<endl;

  }
  return 0;
}

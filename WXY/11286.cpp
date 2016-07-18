#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> id;
map <string, int> mapa;


int main(int argc, char const *argv[]) {


  int N;
  string cad;

  int max_int;
  int max_num;
  bool band;
  while(cin >> N,N)
  {
    band = false;
    max_int = -1;
    max_num = 0;
    mapa.clear();
    for (size_t i = 0; i < N; i++) {
      id.clear();
      for (size_t j = 0; j < 5; j++) {
        cin >> cad;
        id.push_back(cad);
      }
      sort(id.begin(), id.end());
      mapa[id[0]+id[1]+id[2]+id[3]+id[4]]++;
    }
    for (map <string,int>::iterator it = mapa.begin(); it != mapa.end(); it++) {
      max_int = max(max_int,(int)it->second);
    }
    for (map <string,int>::iterator it = mapa.begin(); it != mapa.end(); it++) {
      if(max_int == (int)it->second)
      {
        max_num += (int)it -> second;
      }
    }
    cout << max_num << endl;


  }
  return 0;
}

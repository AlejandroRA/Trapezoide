#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector < ii > vp;

int main(int argc, char const *argv[]) {
  int renglon, columna;
  int indice, valor,  tam;
  while( cin >> renglon >> columna){
    vp delta[10000];
    for (size_t z = 0; z < renglon; z++) {
      cin >> tam;

      vi ind;
      for (size_t i = 0; i < tam; i++) {
        cin >> indice;
        ind.push_back(indice);
      }
      for (size_t i = 0; i < tam; i++) {
        cin >> valor;
        delta[z].push_back(make_pair(ind[i]-1,valor));
      }
    }
    vp resultado[10000];
    for (size_t i = 0; i < renglon; i++) {
      for (size_t j = 0; j < delta[i].size(); j++) {
        resultado[delta[i][j].first].push_back(make_pair(i+1,delta[i][j].second));
       }
    }

  cout << columna << " " << renglon << endl;
    for (size_t i = 0; i < columna; i++) {
cout << resultado[i].size() ;
      for (size_t j = 0; j < resultado[i].size(); j++) {
      cout <<" "<< resultado[i][j].first;
       }
       cout << endl;
       for (size_t j = 0; j < resultado[i].size(); j++) {
          cout <<resultado[i][j].second;
          if(j < (resultado[i].size()-1))
          cout << " ";
        }
        cout << endl;
    }

  }
  return 0;
}

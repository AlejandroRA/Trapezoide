#include <iostream>
#include <stack>
#include <cstring>
#include <vector>
using namespace std;
typedef stack <char> pila;
typedef vector <pila> vpila;

vpila v;


int insert(char a)
{
  for (size_t i = 0; i < v.size(); i++) {
    if(a <= v[i].top()){
      v[i].push(a);
      return 0;
    }
  }
  pila aux;
  aux.push(a);
  v.push_back(aux);
  return 1;

}

int main(int argc, char const *argv[]) {
  string cad;
  int cas = 1;
  int res;
  while (cin >> cad, cad != "end") {
    v.clear();
    res = 0;
    for (size_t i = 0;i < cad.size();i++) {
      res += insert(cad[i]);
    }
    cout << "Case " << cas++ <<": " << res << endl;;
  }
  return 0;
}

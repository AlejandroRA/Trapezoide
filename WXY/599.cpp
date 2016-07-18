#include <iostream>
#include <cstring>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

int contador;
bool visited[26];
vector <int> neightbors[26];

void dfs(int source)
{
  if(!visited[source]){
    contador ++;
    visited[source] = true;
    for (size_t i = 0; i < neightbors[source].size(); i++) {
      dfs(neightbors[source][i]);
    }
  }
}

int main(int argc, char const *argv[]) {
  int N;
  int trees;
  int acorn;
  string cad;
  cin >> N;
  while( N--){
    memset(visited, false, sizeof(visited));
    for (size_t i = 0; i < 26; i++)
      neightbors[i].clear();

    while(cin >> cad, cad[0] != '*'){
      neightbors[cad[1]-'A'].push_back(cad[3] - 'A');
      neightbors[cad[3]-'A'].push_back(cad[1] - 'A');
    }
    cin >> cad;
    trees = acorn = 0;
    for (size_t i = 0; i < cad.size(); i+=2) {
      if( !visited[cad[i]-'A'] ){
        contador = 0;
        dfs(cad[i]-'A');
        if(contador == 1)
        acorn ++;
        else
        trees ++;
      }
    }
    cout << "There are "<<trees<< " tree(s) and "<<acorn<<" acorn(s)." << endl;

  }
  return 0;
}

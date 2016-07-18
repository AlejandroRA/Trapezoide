#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

typedef vector<int> vi;
map<char, int > mapa;
map<string, bool > ady;

queue <int> q;
int reference;

class UnionFind {
private:
  vi p, rank, setSize;
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) {
    if (!isSameSet(i, j)) { numSets--;
    int x = findSet(i), y = findSet(j);

    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
  int getValueRank(int i){ return rank[i]; }
};

int id(char c)
{
  if(!mapa.count(c))
  mapa[c] = reference++;
  return mapa[c];
}

int main(int argc, char const *argv[]) {
  int nodes, pairs;
  bool changed;
  int neightbors;
  int years;
  string awake, conect;
  while(cin >> nodes)
  {
    cin >> pairs;
    cin >> awake;
    reference = 0;
    UnionFind active(nodes);
  //  UnionFind inactive(nodes);
    nodes -= 3;
    mapa.clear();
    ady.clear();
    active.unionSet(id(awake[0]), id(awake[1]));
    active.unionSet(id(awake[1]), id(awake[2]));



    while(pairs --){
      cin >> conect;
      ady[conect] = true;
      reverse(conect.begin(), conect.end());
      ady[conect] = true;
      id(conect[0]);
      id(conect[1]);
    }
    changed = true;
    years = 0;
    while(changed){
      changed = false;
      for (map<char, int>::iterator i = mapa.begin(); i != mapa.end(); i++) {
        if(!active.isSameSet((int)i->second, id(awake[0]))){
          neightbors = 0;
          for(map<char, int>::iterator j = mapa.begin(); j != mapa.end(); j++){
            string aux = "";
            aux += (char)i->first;
            aux += (char)j->first;
            if(ady[aux] && active.isSameSet((int)j->second,id(awake[0]))){
              neightbors ++;
            }
          }
          if(neightbors > 2){
            changed = true;
            q.push((int)i->second);
            nodes--;
          }
        }
      }
      while(!q.empty()){
        active.unionSet(q.front(),id(awake[0]));
        q.pop();
      }
      if(changed)
      years ++;
    }
    if(nodes == 0)
    cout << "WAKE UP IN, "<<years <<", YEARS" << endl;
    else
    cout << "THIS BRAIN NEVER WAKES UP" << endl;
  }
  return 0;
}

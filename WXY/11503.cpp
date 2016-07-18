#include <iostream>
#include <map>
#include <cstring>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef map<string, int > msi;

// Union-Find Disjoint Sets Library written in OOP manner, using both path compression and union by rank heuristics
class UnionFind {                                              // OOP style
private:
  vi p, rank, setSize;                       // remember: vi is vector<int>
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
    // rank is used to keep the tree short
    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
  int getValueRank(int i){ return rank[i]; }
};


int main(int argc, char const *argv[]) {
  int N;
  int pair;
  int count;
  string nombre1, nombre2;
  msi mapa;
  cin >> N;
  while(N--){
    cin >> pair;
    UnionFind uf(pair * 2);
    mapa.clear();
    count = 0;
    while(pair--){
      cin >> nombre1 >> nombre2;
      if(!mapa.count(nombre1))
      mapa[nombre1] = count++;
      if(!mapa.count(nombre2))
      mapa[nombre2] = count++;

      uf.unionSet(mapa[nombre1], mapa[nombre2]);
      cout << uf.sizeOfSet(mapa[nombre1])<<endl;;
    }
  }
  return 0;
}

#include <stdio.h>
#include <vector>

using namespace std;


int main(int argc, char const *argv[]) {
  int n, k, vl, q, d;
  vector < vector <int> > v;
  while( scanf("%d %d",&n,&q) != EOF){
    v.assign(1000000, vector <int>() );
    for (size_t i = 1; i <= n; i++) {
      scanf("%d", &d);
      v[d-1].push_back(i);
    }
    for (size_t i = 0; i < q; i++) {
      scanf("%d %d",&k,&vl );
      if(k -1 < v[vl-1].size())
      printf("%d\n",v[vl-1][k-1] );
      else
      printf("0\n" );
    }
  }
  return 0;
}

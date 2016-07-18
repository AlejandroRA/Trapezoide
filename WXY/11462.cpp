#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  while(scanf("%d",&N ),N){
    int num[N];
    for (size_t i = 0; i < N; i++) {
      scanf("%d",&num[i] );
    }
    sort(num,num+N);
    for (size_t i = 0; i < N; i++) {
      printf("%d",num[i] );
      if(i <(N-1))
      printf(" " );
    }
    printf("\n" );
  }
  return 0;
}

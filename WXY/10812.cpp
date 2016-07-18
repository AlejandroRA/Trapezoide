#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  int a,b;
  int uno,dos;
  cin >> N;
  while(N--){
    cin >> a >> b;
    uno = abs(a-b) / 2;
    dos = a - uno;
    if(uno+dos== a && abs(uno-dos) == b)
    cout << max(uno,dos) << " " << min(uno,dos) << endl;
    else
    cout << "impossible" << endl;

  }
  return 0;
}

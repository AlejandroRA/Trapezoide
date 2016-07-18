#include <iostream>
#include <queue>

using namespace std;


int main(int argc, char const *argv[]) {
  int N;
  int temp;
  int acum;
  int s;
  int aux;
  while(cin >> N,N){
  //  cout << "i" << endl;
    priority_queue <int, vector<int>, greater<int> > cola;

    while(N--){
      cin >> temp;
      cola.push(temp);
    }

 acum = 0;
  while(cola.size()>1){
    s = cola.top();
    cola.pop();
    s += cola.top();
    cola.pop();
    acum += s;
    cola.push(s);

    }
  cout << acum << endl;
}
  return 0;
}

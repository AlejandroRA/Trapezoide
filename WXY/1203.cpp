#include <iostream>
#include <set>
#include <utility>
#include <queue>
using namespace std;

typedef pair <int, int> ii;
typedef pair <int, ii > iii;

priority_queue < iii, vector<iii>, greater<iii> > s;;

int main(int argc, char const *argv[]) {
  string query;
  int id, period, k;
  iii aux;
  while(cin >> query, query != "#"){
    cin >> id >> period;
    s.push(make_pair(period, make_pair(id,period)));
  }
  cin >> k;

  while(k--){
    aux = s.top();
    s.pop();
    cout << aux.second.first << endl;
    aux.first += aux.second.second;
    s.push(aux);
  }
  return 0;
}

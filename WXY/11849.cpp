#include <iostream>
#include <set>

using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[]) {
  ll a,b;
  ll temp;
  set < ll > field;
  while( cin >> a >> b, a || b){
    field.clear();
    for (size_t i = 0; i < a+b; i++) {
      cin >> temp;
      field.insert(temp);
    }
    cout << (a+b) - field.size() << endl;
  }
  return 0;
}

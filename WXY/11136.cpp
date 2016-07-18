#include <iostream>
#include <set>

using namespace std;

typedef multiset <int, greater <int> > msg;
msg::iterator it1, it2;


int main(int argc, char const *argv[]) {
  int num_prom, num_dias, temp;
  long long int sum;
  msg field;
  while(cin >> num_prom,num_prom){
    sum = 0;
    while(num_prom--){
      cin >> num_dias;
      for (size_t i = 0; i < num_dias; i++) {
        cin >> temp;
        field.insert(temp);
      }
      it1 = field.begin();
      it2 = field.end();
      it2--;
      sum += ((*it1) - (*it2));
      field.erase(it1);
      field.erase(it2);
    }
    field.clear();
    cout << sum << endl;
  }

  return 0;
}

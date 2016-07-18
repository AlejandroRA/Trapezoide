#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

typedef multiset <int, greater<int> > msg;
typedef vector <int> vi;
msg::iterator itmsg;

int main(int argc, char const *argv[]) {
  int N;
  int temp;
  int battlefield, battlefield_now, number_green, number_blue;
  msg leamgreen, leamblue;
  vi fightgreen, fightblue;
  cin >> N;
  while(N--){
    leamgreen.clear(); leamblue.clear();
    fightgreen.clear(); fightblue.clear();
    cin >> battlefield >> number_green >> number_blue;
    for (size_t i = 0; i < number_green; i++) {
      cin >> temp;
      leamgreen.insert(temp);
    }
    for (size_t i = 0; i < number_blue; i++) {
      cin >> temp;
      leamblue.insert(temp);
    }
    while(!leamblue.empty() && !leamgreen.empty()){
      fightgreen.clear(); fightblue.clear();

      battlefield_now = min(battlefield,min((int)leamblue.size(),(int)leamgreen.size()));
      itmsg = leamgreen.begin();
      for (size_t i = 0; i < battlefield_now; i++) {
        fightgreen.push_back(*itmsg);
        leamgreen.erase(itmsg++);
      }
      itmsg = leamblue.begin();
      for (size_t i = 0; i < battlefield_now; i++) {
        fightblue.push_back(*itmsg);
        leamblue.erase(itmsg++);
      }

      for (size_t i = 0; i < battlefield_now; i++) {
        int a,b;
        a = fightgreen[i] - fightblue[i];
        b = fightblue[i] - fightgreen[i];
        fightgreen[i] = a;
        fightblue[i] = b;
      }
      for (size_t i = 0; i < battlefield_now; i++) {
        if(fightgreen[i] > 0)
        leamgreen.insert(fightgreen[i]);
        if(fightblue[i] > 0)
        leamblue.insert(fightblue[i]);
      }
    }
    if(leamblue.empty() && leamgreen.empty())
      cout << "green and blue died" << endl;
    else if(!leamblue.empty()) {
      cout << "blue wins" << endl;
      for ( itmsg = leamblue.begin(); itmsg != leamblue.end(); itmsg++)
      cout << *itmsg << endl;
    }
    else{
      cout << "green wins" << endl;
      for ( itmsg = leamgreen.begin(); itmsg != leamgreen.end(); itmsg++)
      cout << *itmsg << endl;

    }
    if(N)
    cout << endl;
  }
  return 0;
}

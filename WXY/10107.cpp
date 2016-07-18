// nth_element example
#include <iostream>     // std::cout
#include <algorithm>    // std::nth_element, std::random_shuffle
#include <vector>       // std::vector
using namespace std;

std::vector<int> v;

int main () 
{
  int T;
  v.clear();
  while( cin >> T)
  {
    v.push_back(T);
    sort(v.begin(),v.end());
    int tam = v.size();
    if(tam %2 == 0)
    {
      cout << (( v[tam /2] + v[(tam /2 )-1] )/ 2) << endl;
    }
    else
    {
      cout << v[tam/2] << endl;
    }
  }
 
  return 0;
}


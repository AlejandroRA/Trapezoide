#include <iostream>
#include <vector>

using namespace std;
struct node
{
	int right;
	int left;
};

vector<node> v;

int main(int argc, char const *argv[])
{
	int solidiers, report;
	int begin, end;
	while(cin >> solidiers >> report, solidiers && report)
	{
		v.clear();
		node temp;
		v.push_back(temp);
		for (int i = 1; i <= solidiers; ++i)
		{
			temp.left = i-1;
			temp.right = i+1;
			v.push_back(temp);
		}
		v[solidiers].right = 0;
		while(report --)
		{
			cin >> begin >> end;
			if(v[begin].left != 0)
				cout << v[begin].left << " ";
			else
				cout << "* ";
			if(v[end].right != 0)
				cout << v[end].right << endl;
			else
				cout << "*"<<endl;;
			
			v[v[begin].left].right = v[end].right;
			v[v[end].right].left = v[begin].left;
		}
		cout << "-" << endl;


	}
	return 0;
}
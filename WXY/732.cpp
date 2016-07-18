
#include <iostream>
#include <stack>

using namespace std;

typedef stack <char> stk;

struct node
{
	string source;
	string destination;
	stk stack;
	string path;
	int num;
};

typedef struct node Node;

string in, out;


void seek_dfs(Node root)
{
	Node r;
	if( root.num == in.size() * 2)
	{
		if(out == root.destination)
			cout << root.path  << endl;
		return;
	}

	if(root.source.size() > 0)
	{
		r.source = root.source.substr(1,root.source.size());
		r.stack = root.stack;
		r.stack.push(root.source[0]);
		r.path = root.path + " i";
		r.num = root.num +1;
		r.destination = root.destination;
		seek_dfs(r);
	}
	if( !root.stack.empty() && root.stack.top() == out[root.destination.size()])
	{
		r.source = root.source;
		r.stack = root.stack;
		r.destination = root.destination + r.stack.top();
		r.stack.pop();
		r.path = root.path + " o";
		r.num = root.num +1;
		seek_dfs(r);
	}
}


int main(int argc, char const *argv[])
{
	while(cin >> in >> out)
	{
		cout << "[" << endl;
		Node aux;
		aux.stack.push(in[0]);
		aux.source = in.substr(1,in.size());
		aux.destination = "";
		aux.path = "i";
		aux.num = 1;
		seek_dfs(aux);
		cout << "]" << endl;		
	}
	return 0;
}


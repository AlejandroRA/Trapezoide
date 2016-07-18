#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;
struct contest
{
	int n_team;
	int solved;
	int problemas[10];
	bool resueltos[10];
	int penalty;
	bool enabled;
}teams[100+10];

void reset()
{
	for (int i = 0; i < 101; ++i)
	{
		memset(teams[i].problemas,0,sizeof(teams[i].problemas));
	 	memset(teams[i].resueltos,false,sizeof(teams[i].resueltos));   
	    teams[i].enabled = false;
	    teams[i].n_team = i+1;
	    teams[i].penalty = 0;
	    teams[i].solved = 0;
	    
	    
	}
}

bool cmp(contest a, contest b)
{
	if(a.solved == b.solved)
		if(a.penalty == b.penalty)
			return a.n_team < b.n_team;
		else
			return a.penalty < b.penalty;
	else
		return a.solved > b.solved;
}

int main(int argc, char const *argv[])
{
	int N;
	string line;
	int team, problem, time_penalty;
	char status;
	cin >> N;
	getline(cin, line);
	getline(cin, line);
	while(N--)
	{
		reset();
		while(getline(cin, line),line != "")
		{
			stringstream entrada(line);
			entrada >> team >> problem >> time_penalty >> status;
			teams[team-1].enabled = true;
			if( status == 'C')
			{
				if(!teams[team-1].resueltos[problem-1])
				{	
					teams[team-1].penalty += time_penalty;
					teams[team-1].resueltos[problem-1] = true;
					teams[team-1].solved ++;
				}
			}
			else if(status == 'I')
			{
				if(!teams[team-1].resueltos[problem-1])
				   teams[team-1].problemas[problem-1] ++;
			}
			else
				continue;
		}

		for (int i = 0; i < 101; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				if(teams[i].resueltos[j])
				{
					teams[i].penalty += (teams[i].problemas[j] * 20);
				}
			}
		}

		sort(teams, teams +101,cmp);
		for (int i = 0; i < 101; ++i)
		{
			if(teams[i].enabled)
			{
				cout << teams[i].n_team << " "<< teams[i].solved << " " << teams[i].penalty << endl;
			}
		}
		if(N)
			cout << endl;
	}
	return 0;
}
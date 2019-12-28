#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <ctype.h>
#include <queue>
#include <map>
#include <set>

typedef long long ll;
typedef unsigned long long ull;
using namespace std;


struct degreePair
{
    int in = 0;
    int out = 0;
    int loc;
    bool operator< (const degreePair & other) const
    {
        return in + out > other.in + other.out;
    }

};

int main()
{
    ll i, j, k;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll nodes;
    cin >> nodes;
    
    vector<degreePair> pairs(nodes);
    vector<ll> answer(nodes);
    ll neededSols = nodes;
    ll next;
    for(i = 0; i < nodes; i++)
    {
    	cin >> next;
    	answer[i] = next;
    	pairs[i].loc = i + 1;
    	if(next != 0)
    	{
    		next--;
    		pairs[i].out++;
    		pairs[next].in++;
    		neededSols--;
    	}
    }

    priority_queue<degreePair> targets;
    queue<degreePair> ins;

    for(i = 0; i < nodes; i++)
    {
    	auto current = pairs[i];
    	if(current.in == 1 && current.out == 0)
    	{
    		ins.push(current);
    		//cout << "added ins: " << current.loc << " " << current.in << " " << current.out << "\n";
    	}
    	else if(current.in == 0)
    	{
    		targets.push(current);
    		//cout << "added target: " << current.loc << " " << current.in << " " << current.out << "\n";

    	}
    }

    while(neededSols)
    {
    	auto targetVal = targets.top();
    	targets.pop();
    	degreePair inVal;
    	if(ins.size() == 0)
    	{
    		inVal = targets.top();
    		targets.pop();
    	}
    	else
    	{
    		inVal = ins.front();
    		ins.pop();
    	}

    	answer[inVal.loc - 1] = targetVal.loc;
    	//cout << "added connection from " << inVal.loc << " to " << targetVal.loc << "\n";
    	targetVal.in += 1;
    	inVal.out += 1;
    	if(targetVal.out == 0)
    	{
    		ins.push(targetVal);
    	}
    	if(inVal.in == 0)
    	{
    		targets.push(inVal);
    	}
    	neededSols -= 1;
    }

    for(auto thing : answer)
    {
    	cout << thing << " ";
    }
    cout << "\n";
    return 0;
}

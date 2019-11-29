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

int main()
{
    ll i, j, k;
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);

    ll cases;
    cin >> cases;

    for(i = 0; i < cases; i++)
    {
    	ll thisSize;
    	cin >> thisSize;
    	vector<string> pins(thisSize);
    	for(j = 0; j < thisSize; j++)
    	{
    		cin >> pins[j];
    	}

    	vector<set<ll>> unused(4);
    	vector<bool> valid(thisSize, true);

    	for(j = 0; j < thisSize; j++)
    	{
    		for(k = j + 1; k < thisSize; k++)
    		{
    			if(pins[j] == pins[k])
    			{
    				valid[k] = false;
    			}
    		}
    	}
    	for(j = 0; j < 10; j++)
    	{
    		for(k = 0; k < 4; k++)
    		{
    			unused[k].insert(j);
    		}
    	}

    	for(j = 0; j < thisSize; j++)
    	{
    		for(k = 0; k < 4; k++)
    		{
    			ll val = pins[j][k] - '0';
    			if(unused[k].find(val) != unused[k].end())
    			{
    				unused[k].erase(val);
    			}
    		}
    	}

    	ll totalChanges = 0;
    	for(j = 0; j < thisSize; j++)
    	{
    		for(k = 0; k < 4; k++)
    		{
    			if(!valid[j])
    			{
    				totalChanges += 1;
    				ll val = (*unused[k].begin());
    				pins[j][k] = val + '0';
    				unused[k].erase(val);
    				valid[j] = true;
    			}
    		}
    	}

    	cout << totalChanges << "\n";	
    	for(auto thing : pins)
    	{
    		cout << thing << "\n";
    	}
    	/*
    	for(j = 0; j < unused.size(); j++)
    	{
    		for(auto thing : unused[j])
    		{
    			cout << thing << " ";
    		}
    		cout << "\n";
    	}
    	*/
    }
    return 0;
}

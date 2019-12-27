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
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll cases;
    ll caseSize;
    cin >> cases;
    for(i = 0; i < cases; i++)
    {
   		cin >> caseSize;
   		set<ll> trackingSet;
   		vector<ll> resultVec;
   		ll thisVal;
   		bool valid = true;
   		for(j = 0; j < caseSize; j++)
   		{
   			trackingSet.insert(j+1);
   		}

   		for(j = 0; j < caseSize; j++)
   		{
   			cin >> thisVal;
   			if(thisVal < j + 1)
   			{
   				valid = false;
   			}
   			else if(trackingSet.find(thisVal) != trackingSet.end())
   			{
   				resultVec.push_back(thisVal);
   				trackingSet.erase(thisVal);
   			}
   			else
   			{
   				if(trackingSet.size() == 0)
   				{
   					valid = false;
   					continue;
   				}
   				else
   				{
   					auto thing = (*trackingSet.begin());
   					resultVec.push_back(thing);
   					trackingSet.erase(thing);
   				}
   			}
   		}

   		if(valid)
   		{
   			for (auto thing : resultVec)
   			{
   				cout << thing << " ";
   			}
   			cout << "\n";
   		}
   		else
   		{
   			cout << -1 << "\n";
   		}
    }
    return 0;
}

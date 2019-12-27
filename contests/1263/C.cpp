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
    cin >> cases;

    for(i = 0; i < cases; i++)
    {
    	ll num;
    	cin >> num;
    	set<ll> possibles;
    	set<ll> intermediateSet;
    	possibles.insert(0);
    	possibles.insert(1);
    	possibles.insert(num);


    	for(j = 2; j <= floor(sqrt(num)); j++)
    	{
    		possibles.insert(num/j);
    		intermediateSet.insert(num/j);
    	}

    	for(auto val : intermediateSet)
    	{
    		possibles.insert(num/val);
    	}

    	
    	cout << possibles.size() << "\n";
    	for(auto thing : possibles)
    	{
    		cout << thing << " ";
    	}
    	cout << "\n";
    }
    return 0;
}

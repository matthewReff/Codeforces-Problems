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
    ll numItems;
    for(i = 0; i < cases; i++)
    {
    	cin >> numItems;
    	vector<ll> type1(numItems);
    	vector<ll> type2(numItems);
    	for(j = 0; j < numItems; j++)
    	{
    		cin >> type1[j];
    	}
    	for(j = 0; j < numItems; j++)
    	{
    		cin >> type2[j];
    	}
    	sort(type1.begin(), type1.end());
    	sort(type2.begin(), type2.end());

    	for(auto elem : type1)
    	{
    		cout << elem << " ";
    	}
    	cout << "\n";
    	for(auto elem : type2)
    	{
    		cout << elem << " ";
    	}
    	cout << "\n";
	}	
    
    return 0;
}

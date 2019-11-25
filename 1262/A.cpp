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
    ll ranges;
    cin >> cases;
    ll leftVal, rightVal;
    vector<ll> lefts;
    vector<ll> rights;
    for(i = 0; i < cases; i++)
    {
    	lefts.clear();
    	rights.clear();
    	cin >> ranges;
	    	for(j = 0; j < ranges; j++)
	    	{
	    		cin >> leftVal;
	    		cin >> rightVal;
	    		lefts.push_back(leftVal);
	    		rights.push_back(rightVal);
	    	}
	    	sort(lefts.rbegin(), lefts.rend());
	    	sort(rights.begin(), rights.end());
	    	//cout << "vals: " << "\n";
	    	if(lefts[0] - rights[0] < 0)
	    	{
	    		cout << 0 << "\n";
	    	}
	    	else
	    	{
	    		cout << lefts[0] - rights[0] << "\n";
	    	}
    }
    return 0;
}

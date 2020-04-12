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
    	ll height, width;
    	cin >> height >> width;
    	vector<string> ans(height, string(width, 'B'));
    	for(j = 1; j < width; j++)
    	{
    		ans[height-1][j] = 'W';
    	}

    	for(auto subStr : ans)
    	{
    		for(auto chr : subStr)
    		{
    			cout << chr;
    		}
    		cout << "\n";
    	}
    }
    return 0;
}
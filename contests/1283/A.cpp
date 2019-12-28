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
    ll hours, mins;
    for(i = 0; i < cases; i++)
    {
    	cin >> hours >> mins;
    	ll total = 0;
    	if(mins != 0)
    	{
    		total += (60 - mins);
    		hours++;
    	}
    	if(hours < 24)
    	{
    		total += (24 - hours) * 60;
    	}
    	cout << total << "\n";
    }
    return 0;
}

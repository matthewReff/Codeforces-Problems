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
    ll hp, voids, strikes;
    cin >> cases;

    for(i = 0; i < cases; i++)
    {
    	cin >> hp >> voids >> strikes;
    	while(voids && hp > 20)
    	{
    		hp /= 2;
    		hp += 10;
    		voids--;
    	}
    	if(ceil(hp / 10.0) <= strikes)
    		cout << "YES\n";
    	else
    		cout << "NO\n";
    }
    return 0;
}

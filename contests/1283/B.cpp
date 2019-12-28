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
    ll kids, candies;
    cin >> cases;

    for(i = 0; i < cases; i++)
    {
    	cin >> candies >> kids;
    	ll div = candies / kids;
    	ll rem = candies % kids;
    	ll total = div * kids;
    	ll possAdd = kids/2;
    	total += min(possAdd, rem);
    	cout << total << "\n";
    }
    return 0;
}

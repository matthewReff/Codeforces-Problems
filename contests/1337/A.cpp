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
    ll a, b, c, d;
    cin >> cases;

    for(i = 0; i < cases; i++)
    {
    	cin >> a >> b >> c >> d;
    	cout << max(a,b) << " " << max(b, c) << " " << min(c, d) << "\n";
    }
    return 0;
}

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
    ll thisVal;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
    	cin >> thisVal;
    	if(thisVal < 3)
    		cout << 0 << "\n";
    	else if(thisVal % 2 == 0)
    		cout << thisVal / 2 - 1 << "\n";
    	else
    		cout << thisVal / 2 << "\n";
    }
    
    return 0;
}

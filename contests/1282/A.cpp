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
    ll left, right;
    ll loc, range;
    cin >> cases;
    for(i = 0; i < cases; i++)
    {
    	vector<ll> arr(2);
    	cin >> arr[0] >> arr[1];
    	sort(arr.begin(), arr.end());
    	left = arr[0];
    	right = arr[1];
    	cin >> loc >> range;
    	ll leftRange = loc - range;
    	ll rightRange = loc + range;

    	ll actualLeft = min(max(leftRange, left), right);
    	ll actualRight = max(min(rightRange, right), left);
    	//cout << actualLeft << " " << actualRight << "\n";
    	cout << (right - left) - (actualRight - actualLeft) << "\n";
    	//cout << right << " "  << left << " " << actualRight << " " << actualLeft << " " << "\n";
    
    }

    return 0;
}

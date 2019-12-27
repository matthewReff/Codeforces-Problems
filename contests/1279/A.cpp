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
    	vector<ll>nums(3);
    	cin >> nums[0] >> nums[1] >> nums[2];
    	sort(nums.rbegin(), nums.rend());
    	if(nums[0] > (nums[1] + nums[2] + 1))
    	{
    		cout << "No\n";
    	}
    	else
    	{
    		cout << "Yes\n";
    	}
    }
    return 0;
}

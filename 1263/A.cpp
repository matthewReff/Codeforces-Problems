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
	vector<ll> nums(3);

	for(i = 0; i < cases; i++) 
	{
		for(j = 0; j < 3; j++)
		{
			cin >> nums[j];
		}

		sort(nums.rbegin(), nums.rend());
		ll total = 0;
		ll diff = nums[1] - nums[2];

		total += diff;
		nums[0] -= diff;
		nums[1] -= diff;

		ll dist = nums[0]/2;
		ll first = min(dist, nums[1]);
		total += first;
		nums[1] -= first;

		ll second = min(dist, nums[2]);
		total += second;
		nums[2] -= second;

		total += min(nums[1], nums[2]);
		cout << total << "\n";
	}   
    return 0;
}

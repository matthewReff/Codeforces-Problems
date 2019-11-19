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
    ll num1, num2;
    ll diff;
    ll distance;
    cin >> cases;
    for(i = 0; i < cases; i++)
    {
    	distance = 0;
    	cin >> num1 >> num2;
    	diff = abs(num1-num2);
    	while(diff - 5 >= 0)
    	{
    		diff -= 5;
    		distance++;
    	}
    	switch(diff)
    	{
    		case 1:
    		case 2:
    			distance++;
    			break;
    		case 3:
    		case 4:
    			distance += 2;
    			break;
    	}
    	cout << distance << "\n";
    }
    return 0;
}

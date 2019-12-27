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

    string originalString;
    string newString = "";

    cin >> originalString;

    for(i = 0; i < originalString.size(); i++)
    {
    	if (originalString[i] == '+' || originalString[i] == '-' || originalString[i] == '*' || originalString[i] == '/')
		{
			newString += ' ';
			newString += originalString[i];
			newString += ' ';
		}
		else
		{
			newString += originalString[i];
		}
    }

    cout << newString << "\n";
    
    return 0;
}

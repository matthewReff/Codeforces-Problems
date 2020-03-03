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
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);

    ll modVal;
    ll numInts;
    ll tot = 1;
    ll currNum;
    bool valid = true;

    cin >> numInts;
    cin >> modVal;
    map<int, int> parsed;
    vector<int> newArr(numInts);
    for(i = 0; valid && i < numInts; i++)
    {
        cin >> currNum;
        newArr[i] = currNum;
        currNum %= modVal;
        parsed[currNum]++;
        if(parsed[currNum] != 1)
        {
            valid = false;
        }
    }

    if(valid)
    {
        for(i = 0; i < newArr.size(); i++)
        {
            for(j = i + 1; j < newArr.size(); j++)
            {   
//                cout << newArr[j] << " " << newArr[i] << "\n";
                ll thisVal = newArr[j] - newArr[i];
                thisVal = abs(thisVal);
                thisVal %= modVal;
                tot *= thisVal;
                tot %= modVal;
            }
        }
    }
    if(valid)
    {
        cout << tot << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
    return 0;
}

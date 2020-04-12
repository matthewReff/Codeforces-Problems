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

    for(int i = 0; i < cases; i++)
    {
        ll arrSize;
        cin >> arrSize;
        vector<ll> top(arrSize);
        vector<ll> bottom(arrSize);
        for(j = 0; j < arrSize; j++)
        {
            cin >> top[j];
        }
        for(j = 0; j < arrSize; j++)
        {
            cin >> bottom[j];
        }

        ll leftMostPos;
        auto itr = find(top.begin(), top.end(), 1);
        if(itr == top.end())
            leftMostPos = top.size();
        else
            leftMostPos = distance(top.begin(), itr);

        ll leftMostNeg;
        itr = find(top.begin(), top.end(), -1);
        if(itr == top.end())
            leftMostNeg = top.size();
        else
            leftMostNeg = distance(top.begin(), itr);

        bool possible = true;
        for(int j = arrSize-1; j >= 0; j--)
        {
            if(bottom[j] > top[j] && leftMostPos >= j)
            {
                possible = false;
            }
            else if(bottom[j] < top[j] && leftMostNeg >= j)
            {
                possible = false;
            }
        }
        if(possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
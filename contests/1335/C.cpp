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
    ll numStudents;
    ll skill;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
    	cin >> numStudents;
        map<int, int> skills;
        for(j = 0; j < numStudents; j++)
        {
            cin >> skill;
            skills[skill]++;
        }

        int maxSize = 0;
        auto itr = skills.begin();
        while(itr != skills.end())
        {
            ll sameSize = (ll)itr->second;
            ll others = skills.size() - 1;
            ll maxPoss = min(sameSize, others);
            sameSize--;
            others++;
            maxPoss = max(min(sameSize, others), maxPoss);
            if(maxPoss > maxSize)
                maxSize = maxPoss;
            itr++;
        }
        cout << maxSize << "\n";
    }
    
    return 0;
}

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

    string sequence;
    cin >> sequence;

    vector<int> leftLocs;
    vector<int> rightLocs;

    for(i = 0; i < sequence.size(); i++)
    {
        if(sequence[i] == '(')
        {
            leftLocs.push_back(i);
        }
        else
        {
            rightLocs.push_back(i);
        }
    }

    sort(leftLocs.begin(), leftLocs.begin());
    sort(rightLocs.rbegin(), rightLocs.rend());

    vector<int> answer;

    int maxPairs = min(leftLocs.size(), rightLocs.size());
    int currentPairs = 0;
    while(currentPairs != maxPairs && leftLocs[currentPairs] < rightLocs[currentPairs])
    {
        answer.push_back(leftLocs[currentPairs]);
        //cout << leftLocs[currentPairs] << " ";
        answer.push_back(rightLocs[currentPairs]);
        //cout << rightLocs[currentPairs] << "\n";
        currentPairs++;
    }

    sort(answer.begin(), answer.end());

    if(answer.size())
    {
        cout << 1 << "\n";
        cout << answer.size() << "\n";
        for(auto elem : answer)
        {
            cout << elem+1 << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
    return 0;
}

#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

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
    int numbers, friends;
    for(i = 0; i < cases; i++)
    {
        cin >> numbers >> friends;
        vector<ll> listNums(numbers, 0);
        vector<ll> listFriends(friends, 0);
        for(j = 0; j < numbers; j++)
        {   
            cin >> listNums[j];
        }
        for(j = 0; j < friends; j++)
        {
            cin >> listFriends[j];
        }
        sort(listNums.begin(), listNums.end());
        sort(listFriends.rbegin(), listFriends.rend());
        ll total = 0;
        ll numsIndex = 0;
        ll friendsIndex = 0;
        while(friendsIndex < friends && listFriends[friendsIndex] > 1)
        {
            total += listNums[numsIndex];
            //cout << "Adding as low value: " << listNums[numsIndex] << "\n";
            //cout << "Skipping: " << listFriends[friendsIndex] << "\n";
            numsIndex += listFriends[friendsIndex] - 1;
            friendsIndex++;
        }

        friendsIndex = 0;
        for(k = numsIndex; k < numbers; k++)
        {
            total += listNums[k];

            //cout << "Adding upper value: " << listNums[k] << "\n";
            if(listFriends[friendsIndex] == 1)
            {
                total += listNums[k];
            }
            friendsIndex++;

        }
        cout << total << "\n";
    }
    
    return 0;
}

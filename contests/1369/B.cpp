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
    string binString;
    ll size;
    for(i = 0;  i < cases; i++)
    {   
        cin >> size;
        cin >> binString;
        int index = 0;
        int index2;
        int counter1 = 0;
        int counter2 = 0;
        while(index < size && binString[index] == '0')
        {
            index++;
            counter1++;
        }
        index2 = size;
        while(index2 >=0  && binString[index2 - 1] == '1')
        {
            index2--;
            counter2++;
        }
        string outString = "";
        outString.append(counter1, '0');
        if(index2 != index)
        {
            outString += '0';
        }
        outString.append(counter2, '1');

        cout << outString << "\n";
    }
    
    return 0;
}

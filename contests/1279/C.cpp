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

// Driver function to sort the vector elements 
// by second element of pairs 
bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
{ 
    return (a.second < b.second); 
} 

int main()
{
    ll i, j, k;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll cases;
    cin >> cases;

    ll m, n;
    for(i = 0; i < cases; i++)
    {
    	cin >> m >> n;
    	vector<ll> order(m);
    	vector<pair<ll, ll>> actualOrder;
    	for(j = 0; j < m; j++)
    	{
    		cin >> order[j];
    	}
    	vector<ll> send(n);
    	for(j = 0; j < n; j++)
    	{
    		cin >> send[j];
    	}
    	ll leftLoc = 0;
    	ll total = 0;
    	ll used = 0;
    	set<ll> sorted;
    	for(j = 0; j < n; j++)
    	{
    		if(sorted.find(send[j]) == sorted.end())
    		{
    			//cout << "grabbing from pile for " << send[j] << "\n";
    			auto loc = find(order.begin()+leftLoc, order.end(), send[j]);
    			ll rightLoc = loc - order.begin();
    			total += ((rightLoc - used + 1) * 2) - 1;
    			for(k = leftLoc; k < rightLoc; k++)
    			{
    				sorted.insert(order[k]);
    				//cout << "index " << k << " is sorted.\n";
    			}
    			leftLoc = rightLoc;
    			//cout << "new left: " << leftLoc << "\n";
    		}
    		else
    		{
    			//cout << "grabbing from sorted for " << send[j] << "\n";
    			total++;
    		}
    		used++;
    	}
    	cout << total << "\n";
    }
    return 0;
}

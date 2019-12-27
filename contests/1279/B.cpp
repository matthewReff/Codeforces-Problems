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

vector<ll> sums;
//stolen from https://www.geeksforgeeks.org/variants-of-binary-search/
int greatestlesser(int low, int high, int key) 
{ 
    int ans = -1; 
  
    while (low <= high) { 
        int mid = low + (high - low + 1) / 2; 
        int midVal = sums[mid]; 
        //cout << "mid: " << mid << " " << "midval: " << midVal << "\n";
        if (midVal < key) { 
  
            // if mid is less than key, all elements  
            // in range [low, mid - 1] are < key 
            // we note down the last found index, then  
            // we search in right side of mid 
            // so we now search in [mid + 1, high] 
            ans = mid; 
            low = mid + 1; 
        } 
        else if (midVal > key) { 
  
            // if mid is greater than key, all elements 
            // in range [mid + 1, high] are > key 
            // then we search in left side of mid 
            // so we now search in [low, mid - 1] 
            high = mid - 1; 
        } 
        else if (midVal == key) { 
  
            // if mid is equal to key, all elements  
            // in range [mid + 1, high] are >= key 
            // then we search in left side of mid 
            // so we now search in [low, mid - 1] 
            high = mid - 1; 
        } 
    } 
  
    return ans; 
}  

int main()
{
    ll i, j, k;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll cases;
    cin >> cases;
    ll minutes, verses;
    for(i = 0; i < cases; i++)
    {
    	cin >> verses >> minutes;
    	vector<ll> lengths(verses);
    	sums.resize(verses, 0);
    	ll mostLoc = 0;
    	ll most = 0;
    	for(j = 0; j < verses; j++)
    	{
    		cin >> lengths[j];
    	}

    	sums[0] = lengths[0];
    	for(j = 1; j < verses; j++)
    	{
    		sums[j] = sums[j-1] + lengths[j];
    	}
    	if (minutes >= sums[sums.size() -1])
    	{
    		cout << "0\n";
    		continue;
    	}
    	sums.push_back(99999999999);
    	//cout << "most: " << most << "\n";
    	for(j = 0; j < verses; j++)
    	{
    		auto val = greatestlesser(j, verses, minutes + lengths[j] + 1);
    		//cout << "loc: " << j << " val: " << val << "\n";
    		if(val != -1)
    		{
    			if(val >= most)
    			{
    				most = val;
    				mostLoc = j;
    			}
    		}
    	}
    	if(most != -1)
    	{
    		cout << mostLoc + 1 << "\n";
    	}
    	else
    	{
    		cout << "0\n";
    	}
    	//cout << most << ", " << mostLoc << "\n";
    }
    
    return 0;
}

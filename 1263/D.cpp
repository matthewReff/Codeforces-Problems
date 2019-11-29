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


vector<ll> parent;
vector<ll> sizeArr;

//shamelessly stolen from
//https://cp-algorithms.com/data_structures/disjoint_set_union.html
void make_set(int v) {
    parent[v] = v;
    sizeArr[v] = 1;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sizeArr[a] < sizeArr[b])
            swap(a, b);
        parent[b] = a;
        sizeArr[a] += sizeArr[b];
    }
}

int main()
{
    ll i, j, k;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<bool> used(26, false);
	ll numStrings;
	cin >> numStrings;
	string pass;

	parent.resize(26);
	sizeArr.resize(26);

	for(i = 0; i < 26; i++)
	{
		make_set(i);
	}

	for(i = 0; i < numStrings; i++)
	{
		cin >> pass;
		for(auto letter : pass)
		{
			used[letter - 'a'] = true;
		}
		for(j = 0; j < pass.size() - 1; j++)
		{
			//cout << "checking: " << pass[j] << " " << pass[j+1] << "\n";
			if(find_set(pass[j] - 'a') != find_set(pass[j+1] - 'a'))
			{
				//cout << "unioning: " << pass[j] << " " << pass[j+1] << "\n";
				union_sets((pass[j] - 'a'), (pass[j+1] - 'a'));
			}
		}
	} 


	ll possible = 26;
	for(auto thing : used)
	{
		if(thing)
		{
			possible--;
		}
	}
	set<ll> temp;
	for(j = 0; j < parent.size(); j++)
	{
		//cout << j << ": " << parent[j] << "\n";
		temp.insert(parent[j]);
	}

	//cout << temp.size() << " " << possible << "\n";	
	cout << temp.size() - possible << "\n";	
    return 0;
}

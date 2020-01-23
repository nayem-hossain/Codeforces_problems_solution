#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;


int main()
{


    int n,k,input,requiredscore,cunt=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        v.push_back(input);
        if(i+1==k)
        {
            requiredscore=v[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if((requiredscore<=v[i]) && (0<v[i]))
        {
            cunt++;
        }
    }
    cout<<cunt;

    return 0;

}

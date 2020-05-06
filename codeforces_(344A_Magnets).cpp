#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <bitset>
#include <string>
#include <utility>
#include <iterator>
#include <fstream>
#include <sstream>
#include <numeric>
#include <functional>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cctype>
#include <climits>
#include <ctime>
#include <cassert>
using namespace std;

int main()
{
    int n,iTh,b=0,cunt=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>iTh;
        if(iTh!=b)
        {
            cunt++;
        }
        b=iTh;
    }
    cout<<cunt;

    return 0;
}

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
    string s;
    cin>> s;
    int upper=0,lower=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if(lower<upper)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
        for(int i=0; i<s.size(); i++)
        {
            cout<<s[i];
        }
    }
    else if(lower==upper)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }

        for(int i=0; i<s.size(); i++)
        {
            cout<<s[i];
        }
    }
    else
    {
       for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }

        for(int i=0; i<s.size(); i++)
        {
            cout<<s[i];
        }
    }
    return 0;
}

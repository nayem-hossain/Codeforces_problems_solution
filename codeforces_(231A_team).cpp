#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
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
    int n,Petya,Vasya,Tonya,cunt=0;
    cin>>n;
    while(n--)
    {
        cin>>Petya>>Vasya>>Tonya;
        if(Petya==1&&Vasya==1||Petya==1&&Tonya==1||Vasya==1&&Tonya==1)
        {
            cunt++;
        }

    }
    cout<<cunt;

    return 0;
}

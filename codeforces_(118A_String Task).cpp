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
    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        char c=towlower(s[i]);
        if(c=='a'||c=='o'||c=='y'||c=='e'||c=='u'||c=='i')//Vowels are letters "A", "O", "Y", "E", "U", "I"
        {
            continue;
        }
        else{
            cout<<'.'<<c;
        }
    }
    return 0;
}

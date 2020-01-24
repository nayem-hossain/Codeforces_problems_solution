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
    int M,N,dominoSQUARE=2;
    cin>>M>>N;
    if(1<=M&&M<=N&&M<=16&&N<=16)
    {
        int board_square=M*N;
        int numberOFdominos=board_square/dominoSQUARE;
        cout<<numberOFdominos;
    }
    return 0;
}

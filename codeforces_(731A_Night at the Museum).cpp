#include<bits/stdc++.h>
using namespace std;
int main()
{
    int minimum_rotation=0;
    string s;
    char static_pointer='a';  //initially points to the alphabet 'a'
    cin >> s;
    for(int i=0;i<s.size(); i++)
    {
        int difference= abs(s[i]-static_pointer);

        static_pointer=s[i];

        if(difference>13)  //here, 13 is the number of half alphabet.
        {
            difference=(26-difference);  //here, 26 is the number of alphabet.
        }
        minimum_rotation= minimum_rotation+difference;
    }
    cout<< minimum_rotation<<endl;

   return 0;
}

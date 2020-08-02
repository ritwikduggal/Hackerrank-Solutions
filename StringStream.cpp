#include <sstream>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str)
{
	// Complete this function
    vector<int> numbers;
    int l=str.length();
    int k=0, count=0, val=0;
    for(int i=l-1; i>=0; i--)
    {
         k=str[i]-48;
         if(k == -4)
         {
           numbers.push_back(val);
           count=0;
           val=0;
         }
         val = val + k*pow(10, count);
         count++;
    }
    return numbers;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}

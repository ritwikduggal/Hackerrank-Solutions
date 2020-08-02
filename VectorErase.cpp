#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        vec.push_back(k);
    }
    int n1, n2, n3;
    cin>>n1;
    cin>>n2>>n3;
    vec.erase(vec.begin()+(n1-1));
    vec.erase(vec.begin()+(n2-1), vec.begin()+(n3-1));
    cout<<vec.size()<<endl;
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

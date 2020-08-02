#include<iostream>
using namespace std;
    struct T
    {
        int a;
        char fn[200];
        char ln[200];
        int s;
    };
int main()
{
    struct T k;
    cin>>k.a>>k.fn>>k.ln>>k.s;
    cout<<k.a<<" "<<k.fn<<" "<<k.ln<<" "<<k.s;
}

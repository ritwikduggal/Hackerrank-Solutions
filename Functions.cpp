#include <iostream>
#include <cstdio>
using namespace std;

void max_of_four(int a, int b, int c, int d)
{
    if(a>b && a>c && a>d){cout<<a<<endl;}
    else if(b>a && b>c && b>d){cout<<b<<endl;}
    else if(c>a && c>b && c>d){cout<<c<<endl;}
    else if(d>a && d>b && d>c){cout<<d<<endl;}
    else
    {cout<<"Enter Valid digits"<<endl;}

}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max_of_four(a, b, c, d);

    return 0;
}

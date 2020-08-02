#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n, q, a, k;
  int ans[n];
  cin>>n;
  cin>>q;
  vector<int> V[n];
  for(int i=0; i<n; i++)
  {
    cin>>a;
    for(int j=0; j<a; j++)
    {
      cin>>k;
      V[i].push_back(k);
    }
  }
  for(int i=0; i<q; i++)
  {
    int o, p;
    cin>>o>>p;
    ans[i]=V[o][p];
  }
  for(int i=0; i<q; i++)
  {
    cout<<ans[i]<<endl;
  }
}

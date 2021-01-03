#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<ctime>
#include<algorithm>
#include<iterator>
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<list>
#include<stack>
#include<functional>
#include<utility>
#include<numeric>
#include<bitset>
#include<iterator>
#define INF (int)1e9
#define MOD 1000000007
using namespace std;


int main()
{
  // freopen("input.txt","r",stdin);
  int n ,m;
  cin >>n;
  cin >>m;
  int count=0;
  while (n!=m)
  {
    if (m>n)
    {
      if (m % 2 ==0)
      {
        m=m/2;
        count ++;
      }
      else if (m%2==1)
      {
        m=(m+1)/2;
        count+=2;
      }
    }
    else if (m<n)
    {
      m++;
      count++;
    }
  }
  cout << count;


  return 0;
}

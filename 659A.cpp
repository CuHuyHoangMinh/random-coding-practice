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


int main(int argc, char const *argv[]) {
  // freopen("input.txt","r",stdin);
  int n,a,b;
  cin >>n;
  cin >> a;
  cin >>b;
  int ans=a+b;
  if (ans<0)
  {
    while (ans<=0)
    {
      ans+=n;
    }
  }
  else
  {
    ans=ans%n;
    if (ans==0) ans=n;
  }
  cout << ans <<endl;
  return 0;
}

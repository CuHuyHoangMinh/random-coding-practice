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
  long long a,b;
  cin >>a;
  cin >>b;
  // cout << a<<" "<< b <<endl;
  long long ans=0;
  while (a>0&&b>0)
  {
    if (a>=b)
    {
      ans=ans+a/b;
      a=a%b;
    }
    else
    {
      ans=ans+b/a;
      b=b%a;
    }
  }
  cout << ans <<endl;


  return 0;
}

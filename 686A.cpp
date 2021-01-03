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
  long long n;
  long long sum=0;
  char sign;

  cin >> n;
  cin >>sum;
  long long child=0;
  for (int i = 0; i < n; i++) {
    cin >> sign;
    long long val;
    cin >> val;
    if (sign=='+')
    {
      sum+=val;
    }
    if (sign=='-') {
      if (sum>=val)
      {
        sum-=val;
      }
      else child++;
    }

  }
  cout << sum<<" "<< child <<endl;
  return 0;
}

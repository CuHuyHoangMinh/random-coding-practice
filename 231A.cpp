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
  int n;
  cin >> n;
  int count=0;
  for (int i = 0; i < n; i++) {
    int temp;
    int sum=0;
    for (int j = 0; j < 3; j++) {
      cin >> temp;
      sum+=temp;
    }
    if (sum>1) count++;
  }
  cout << count;
  return 0;
}

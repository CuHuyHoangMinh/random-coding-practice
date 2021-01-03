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

  int n;cin >> n;
  int a[5]={0};
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a[temp]++;
  }
  while (a[1]>0&&a[3]>0)
  {
    a[1]--;
    a[3]--;
    a[4]++;
  }

  while (a[2]>=2) {
    a[2]-=2;
    a[4]++;
  }
  while (a[1]>=2&&a[2]>0)
  {
    a[1]-=2;
    a[2]--;
    a[4]++;
  }
  while(a[1]>0&&a[2]>0)
  {
    a[1]--;
    a[2]--;
    a[4]++;
  }
  while (a[1]>0)
  {
    a[1]-=4;
    a[4]++;
  }
  while(a[2]>0)
  {
    a[2]-=2;
    a[4]++;
  }
  while(a[3]>0)
  {
    a[3]--;
    a[4]++;
  }

  cout << a[4];
  return 0;
}

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

  int n; cin >> n;
  int max=-1;
  int count=0;
  for (int i = 0; i < n; i++) {
    int a,b;
    cin >>a;
    cin >>b;
    count=count-a+b;
    // cout << count <<endl;
    if (count>max) max=count;
  }
  cout << max <<endl;
  return 0;
}

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
  int n;
  cin >> n;
  int x=0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >>s;
    if (s[1]=='+') x++;
    if (s[1]=='-') x--;
  }
  cout << x;
  return 0;
}

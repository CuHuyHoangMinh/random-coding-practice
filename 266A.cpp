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
  cin >>n;
  string s;
  cin >>s;
  int count=0;
  for (int i = 0; i < n-1; i++) {
    if (s[i]==s[i+1]) count++;
  }
  cout << count;
  return 0;
}

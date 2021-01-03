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
  string st1,st2;
  cin >>st1;
  cin >> st2;

  transform(st1.begin(), st1.end(),st1.begin(),::tolower);
  transform(st2.begin(), st2.end(),st2.begin(),::tolower);
  if (st1>st2) cout <<1;
  if (st2==st1) cout << 0;
  if (st1<st2) cout << -1;


  return 0;
}

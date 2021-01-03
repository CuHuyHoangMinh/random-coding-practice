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
  string s;
  cin >>s;
  int check=true;
    for (int i = 1; i < s.size(); i++) {
      if (islower(s[i]))
      {
        check=false;
      }
    }
  if (check)
  {
    for (int i = 0; i < s.size(); i++) {
      if (islower(s[i]))
      {
        s[i]=toupper(s[i]);
      }
      else if (isupper(s[i]))
      {
        s[i]=tolower(s[i]);
      }
    }

  }
  cout << s;
  return 0;
}

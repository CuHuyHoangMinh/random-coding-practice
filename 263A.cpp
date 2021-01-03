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
  for (int i = 1; i < 6; i++) {
    for (int j =1; j < 6; j++) {
      int temp;
      cin >> temp;
      if (temp==1)
      {
        cout << abs(3-i)+abs(3-j);
      }
    }

  }
  return 0;
}

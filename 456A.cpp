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


struct Pair {
    int A;
    int B;

    bool operator<( const Pair& rhs ) const
        { return B < rhs.B; }
};


int main()
{
  // freopen("input.txt","r",stdin);

  int n;
  cin >> n;

  int a[n];
  int b[n];

  // cout <<n;
  // it=v.begin();
  bool check=true;
  for (int i = 0; i < n; i++) {
    // cout << i <<endl;
    cin >>a[i];
    cin >>b[i];
    if (a[i]!=b[i]) check=false;


  }
  if (check) cout << "Poor Alex" <<endl;
  else cout << "Happy Alex" <<endl;









  return 0;
}

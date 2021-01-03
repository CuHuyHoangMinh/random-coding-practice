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
  string st;
  cin >>st;
  int count=1;
  for (int i = 0; i < st.size()-1; i++) {
    if (st[i]==st[i+1]) count++;
    else count=1;
    if (count>=7)
    {
      cout << "YES";
      return 0;
    }

    // cout << count<<" "<< i <<endl;

  }
  cout << "NO";
  return 0;
}

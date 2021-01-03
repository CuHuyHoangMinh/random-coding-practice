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
  int a[6];
  int b[100]={0};
  bool check1=false;
  bool check2=false;
  for (int i = 0; i < 6; i++) {
    cin >> a[i];
    b[a[i]]++;
  }
  for (int i = 0; i < 20; i++) {
    if (b[i]==4) check1=true;
    if (b[i]==2) check2=true;
    if (b[i]==6) {
      check1=true;
      check2=true;
      break;
    }
    if(b[i]==5)
    {
      check1=true;
      check2=false;
      break;
    }
  }
  if (check1&&check2) cout << "Elephant" <<endl;
  else if (check1 &&! check2) cout << "Bear" <<endl;
  else  cout << "Alien"<<endl;

  return 0;
}

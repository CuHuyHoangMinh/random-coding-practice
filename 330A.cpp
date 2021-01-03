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
  int n,m;
  cin >>n;
  cin >>m;
  int a[n][m];
  int checkr[n]={0};
  int checkc[m]={0};
  for (int i = 0; i < n; i++) {
    /* code */
    for (int j = 0; j < m; j++) {
      char temp;
      cin >>temp;
      if (temp=='.') a[i][j]=0;
      if (temp=='S')
      {
        a[i][j]=1;
        checkr[i]=1;
        checkc[j]=1;
        // cout << i<<" "<< j <<endl;
      }
    }
  }
  int count=0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int temp=checkr[i]+checkc[j];
      // cout << checkr[i]<<" "<< checkc[j] <<endl;
      if (temp<=1) count++;
    }
  }
  cout << count<<endl;
  return 0;
}

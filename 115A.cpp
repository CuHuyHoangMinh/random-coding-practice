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
  int a[n+1];
  int b[n];
  for (int i = 1; i <= n; i++) {
    cin >>a[i];
    b[i]=0;
  }
  int max=0;
  for (int i = 1; i <=n; i++) {
    int p=0;
    int temp=i;
    while (temp!=-1)
    {
      p++;
      temp=a[temp];
      //cout << b[temp]<<" "<<temp <<endl;
      //cout <<"**************************"<<endl;
    }
    if (p>max) max=p;
  }
  cout << max<<endl;
  return 0;
}

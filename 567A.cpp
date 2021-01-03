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

int main()
{
  // freopen("input.txt","r",stdin);
  int n;
  cin >> n;
  long long a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
for (int i = 0; i < n; i++) {
  long long min1=99999999999;
  long long min2=99999999999;
  if (i-1>=0)
    min1=abs(a[i]-a[i-1]);
  if (i+1<n)
    min2=abs(a[i+1]-a[i]);

  // cout << min1<<" "<< min2 <<endl;
  cout << min(min1,min2)<< " ";
  long long max1=-99999999999;
  long long max2=-99999999999;
  if (i!=0)
  {
    max1=abs(a[i]-a[0]);
  }
  if (i!=n-1)
  {
    max2=abs(a[n-1]-a[i]);
  }
  cout << max(max1,max2)<<endl;
}




  return 0;
}

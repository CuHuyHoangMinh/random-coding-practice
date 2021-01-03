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

  long long n;
  cin >> n;
  long long a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a,a+n);
  long long i=0;
  while(i<n&&a[i]==a[i+1])
  {
    i++;
  }

  long long j=1;
  while (j<n&&a[n-j]==a[n-j-1]) {
    j++;
  }

  // cout << fact(20000);
  long long ans= (i+1)*j;
  if (a[n-1]==a[0]) ans=n*(n-1)/2;
  // cout <<n;
  // cout << a[n-1]<<" "<< a[0] <<endl;
  cout << (a[n-1]-a[0])<< " ";
  cout << ans;
  return 0;
}

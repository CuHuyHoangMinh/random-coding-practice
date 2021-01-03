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
freopen("input.txt","r",stdin);
string st;
cin >> st ;
long long n;
cin >>n;
int a[st.size()]={0};
for (int i = 0; i < st.size(); i++) {
  a[i]=0;

}
for (int i = 1; i < st.size(); i++) {
  if (st[i]==st[i-1]) a[i]=a[i-1]+1;
  else a[i]=a[i-1];
  /* code */
}
// for (int i = 0; i < st.size(); i++) {
//   cout << a[i] <<" ";
// }
cout << endl;
for (long long i = 0; i < n; i++) {
  long long l,m;
  cin >> l;
  cin >> m;
  long long count1=0;
  long long count2=0;

  cout << a[m-1]-a[l-1]<< endl;


}



  return 0;
}
